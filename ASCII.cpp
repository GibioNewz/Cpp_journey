#include <iostream> 
#include <string>
using namespace std;

int main()
{
    for(int i = 0; i<26; i++)
        cout<<(char)(i+int('a'))<<"\t"<<i+int('a')<<"\n";
    return 0;
}