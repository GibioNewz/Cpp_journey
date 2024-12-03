#include <iostream> 
#include <string>
#include <vector>
using namespace std;


int main()
{   
    vector<string>names;
    vector<int>ages;
    for(string temp; cin>>temp;)
    {
        int age = 0;
        cin>>age;
        bool word= false;
        for(string temp2: names){
            if(temp2 == temp && !word){
                cout<<"BLEEP"<<endl;
                word = true;

            }
        }
        if(!word && temp != "NoName" && age != 0){
            names.push_back(temp);
            ages.push_back(age);
        }
        else if(temp == "NoName" && age == 0)
            break;
    }
    for(int i = 0; i< (int)names.size(); i++)
    {
        cout<<names[i]<<"\t"<<ages[i]<<endl;
    }
    return 0;
}