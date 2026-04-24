#include<iostream>
using namespace std;

template<typename T1,typename T2>
auto product(T1 a, T2 b){return a*b;}

int main()
{
    cout<<product(4.4,5)<<endl;
    cout<<product(4,3)<<endl;
    return 0;
}