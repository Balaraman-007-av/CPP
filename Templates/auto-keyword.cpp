#include<iostream>
using namespace std;
auto add(auto a,auto b)
{
    return a+b;
}
int main()
{
    cout<<add(4,5.4)<<endl;
}
//this only works in c++20 version 
//internally treated as templates