#include<iostream>
using namespace std;
template <typename A, typename B>
auto add(A a,B b)
{
    return a+b;
}
int main()
{
    cout<<add(3,4.5);
    cout<<add(string("Hello"),string("world"));//pointer + pointer can't possible in cpp so we need to specify it as a string
}