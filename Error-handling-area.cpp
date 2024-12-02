#include <iostream> 
#include <string>
using namespace std;

int f(int x, int y, int z)
{
int area1 = area(x,y);
if (area1<=0)
error("non−positive area");
int area2 = framed_area(1,z);
int area3 = framed_area(y,z);
double ratio = double(area1)/area3;
// ...
}


 
int main()
{   
    f(-3,-4,-5) // if both negative the result is positive but the input is wrong, theres still silly errors
    return 0;
}