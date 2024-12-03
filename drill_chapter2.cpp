#include <iostream> 
#include <string>
using namespace std;

int main()
{
    cout << "Please enter the name of the person you want to write to: ";
    string ﬁrst_name;
    // ﬁrst_name is a variable of type string
    cin >> ﬁrst_name;
    cout << "Please enter your age : ";
    int age;
    // ﬁrst_name is a variable of type string
    cin >> age;
    if (age <= 0 || age >=110 )
    {
        cout<<"You're full yapping!\n";
        return -1;
    }
    cout << "Please enter the name of your friend you want to write to: ";
    string friend_name ;
    cin >> friend_name;
    // read characters into ﬁrst_name
    cout << "Dear " << ﬁrst_name <<",\n"<<"How are you? I am fine. I miss you. "
    << "Have you seen "<< friend_name <<" lately?\n";
    if(age <= 24)
    {
        cout<<"You will be the rizzler in your "<< age+1<<"\n";
    }
    else if(age > 24 && age<70)
    {
       cout<<"You will be forever alone in your "<< age+1<<"\n"; 
    }
    else
        cout<<"GOOD MORNING happy thoughts insert tweety "<<"\n";
    cout<<"Yours sincerely,"<< "\n"<<"\n";
}