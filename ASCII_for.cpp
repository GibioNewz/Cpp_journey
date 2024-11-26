#include <iostream> 
#include <string>
using namespace std;

int main()
{   
    int i = 0 ;

    while(i<62)
    {
        if(i<26)
        cout<<(char)(i+int('a'))<<"\t"<<i+int('a')<<"\n";
        else if(i>=26 && i<52)
            cout<<(char)(i+int('A')-26)<<"\t"<<i+int('A')-26<<"\n";
        else if(i>=52)
            cout<<(char)(i-52)<<"\t"<<i-52<<"\n";
        i++;
    }
    return 0;
}