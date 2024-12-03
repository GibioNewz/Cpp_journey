#include <iostream> 
#include <string>
using namespace std;

int main()
{
    cout<<"enter your divisa type :\n";
    string divisa;
    cin>>divisa;
    cout<<"enter your amount :\n";
    double amount;
    cin>>amount;
    if(divisa == "yen")
        cout<<"You have a total of "<<amount*154.41<<"yens\n";
    else if(divisa == "kroner")
        cout<<"You have a total of "<<amount*11.06<<"kroners\n";
    else if(divisa == "pound")
        cout<<"You have a total of "<<amount*0.79<<"pounds\n";
    else
        cout<<"We don't work with that divisa :c";
    return 0;
}