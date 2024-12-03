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
    int type = 0 ;
    if(divisa == "yen")
        type = 1;
    else if(divisa == "kroner")
        type = 2;
    else if(divisa == "pound")
        type = 3;
    else
        cout<<"We don't work with that divisa :c";
    switch (type)
    {
    case 1:
        cout<<"You have a total of "<<amount*154.41<<" yens\n";
    break;
    
    case 2:
        cout<<"You have a total of "<<amount*11.06<<" kroners\n";
    break;

     case 3:
        cout<<"You have a total of "<<amount*0.79<<" pounds\n";
    break;
    
    default:
    cout<<"UNEXPECTED ERROR";
    break;
    }
    return 0;
}