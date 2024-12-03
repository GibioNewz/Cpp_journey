#include <iostream> 
#include <string>
using namespace std;

int square(double number)
{
    int result = 0;
    for(int i = 0; i<number; i++)
    {
        result+= number;
    }
    return result;
}
int main()
{   
    cout<<"please, enter your number:\n";
    int number = 0;
    cin>>number;
    cout<<square(number)<<endl;
    return 0;
}