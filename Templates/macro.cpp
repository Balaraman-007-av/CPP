#include<iostream>
using namespace std;
#define Square(a) a*a
int main()
{
    int b = 3;
    cout<<Square(b++);
}   
//returns 3 * 4 unsafe