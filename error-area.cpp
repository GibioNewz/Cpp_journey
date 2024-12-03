#include <iostream> 
using namespace std;

int area(int x, int y)
{
    return x*y;
}



int main()
{   
    int s1 = area(7,2; // error : ) missing
    int s2 = area(7,2) // error : ; missing
    Int s3 = area(7,2); // error : Int (with a capitalized ’i’) is not a type
    int s4 = area('7,2); // error : non-terminated character ’; terminating ’ is missing)
    return 0;
}