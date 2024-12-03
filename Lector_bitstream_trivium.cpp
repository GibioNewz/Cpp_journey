#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <cmath>
#include <iomanip>
#include <bitset>

using namespace std;

double calcularDesviacionEstandar(const vector<int>& frecuencias, int total) {
    double media = total / 16.0;
    double suma = 0;
    for (int freq : frecuencias) {
        suma += pow(freq - media, 2);
    }
    return sqrt(suma / 16);
}

int main() {
    ifstream archivo("random_output.txt");
    if (!archivo.is_open()) {
        cerr << "No se pudo abrir el archivo." << endl;
        return 1;
    }

    vector<int> bits;
    string linea;
    int n, timestamp, bit;

    while (getline(archivo, linea)) {
        sscanf(linea.c_str(), "%d, %d, %d", &n, &timestamp, &bit);
        if (n >= 1153) {
            bits.push_back(bit);
        }
    }
    archivo.close();

    if (bits.size() < 4) {
        cerr << "No hay suficientes bits para formar paquetes." << endl;
        return 1;
    }
    map<string, int> frecuenciaCombinaciones;
    vector<int> frecuencias(16, 0);

    for (size_t i = 0; i <= bits.size() - 4; i += 4) {
        string combinacion = to_string(bits[i]) + to_string(bits[i + 1]) + to_string(bits[i + 2]) + to_string(bits[i + 3]);
        int indice = stoi(combinacion, nullptr, 2); 
        frecuenciaCombinaciones[combinacion]++;
        frecuencias[indice]++;
    }

    int totalPaquetes = 0;
    for (int freq : frecuencias) {
        totalPaquetes += freq;
    }

    double desviacionEstandar = calcularDesviacionEstandar(frecuencias, totalPaquetes);

    ofstream salida("frecuencias.txt");
    salida << "Combinacion\tFrecuencia" << endl;
    for (int i = 0; i < 16; i++) {
        string combinacion = bitset<4>(i).to_string(); // Convertir índice a binario
        salida << combinacion << "\t" << frecuencias[i] << endl;
    }
    salida << "Total paquetes: " << totalPaquetes << endl;
    salida << "Desviación estándar: " << fixed << setprecision(4) << desviacionEstandar << endl;
    salida.close();

    cout << "Análisis completado. Frecuencias y estadísticas guardadas en 'frecuencias.txt'." << endl;

    return 0;
}
