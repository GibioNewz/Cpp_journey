#include <iostream> 
#include <string>
#include <vector>
using namespace std;


int main()
{   
    vector<string>words;
    for(string temp; cin>>temp;)
    {
        bool word= false;
        for(string temp2: words){
            if(temp2 == temp && !word){
                cout<<"BLEEP"<<endl;
                word = true;

            }
        }
        if(!word){
            cout<<temp<<endl;
        }
    }
    return 0;
}