#include <iostream> 
#include <string>
using namespace std;

int area(int x, int y)
{
    return x*y;
}



int main()
{   
    int x0 = arena(7,2); // error : undeclared function
    int x1 = area(7); // error : wrong number of arguments
    int x2 = area("seven",2); // error : 1st argument has a wrong type
    string m = area(7,2); // area return a int not a string error:error: conversion from ‘int’ to non-scalar type ‘std::string’ {aka ‘std::__cxx11::basic_string<char>’} requested
    return 0;
}