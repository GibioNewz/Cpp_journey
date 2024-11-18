#include <iostream> 
#include <math.h>
using namespace std;
 int main()
 {
    // simple program to exercise operators
    cout << "Please enter a integer value: ";
    int n = 0;
    cin >> n;
    cout << "n == " << n
    << "\nn++1 == " << n++
    << "\nthree times n == " << 3*n
    << "\n n + 1 for pemdas == " << n+n/n
    << "\nn squared == " << n*n
    << "\nhalf of n == " << n/2
    << "\nsquare root of n == " << sqrt(n)
    << '\n';
 }