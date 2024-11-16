#include <iostream>
#include<string>
int main()
{
    std::cout<<"Please enter your name and age\n";
    double age;
    std::string name;
    std::cin>>name>>age;
    age *= 12;
    std::cout<<"Hi "<<name<<' '<<"you are "<<age<<' '<<"month old. \n Congratulations !!!";
    return 0 ;
}