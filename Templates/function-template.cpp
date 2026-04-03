#include<iostream>
using namespace std;
template<typename A >
A findMax(A a, A b)
{
    return a>b? a:b;
}
int main()
{
    cout<<findMax(1,2)<<endl;
    cout<<findMax(3.4,5.6)<<endl;
    cout<<findMax('a','A')<<endl;
    return 0;
}