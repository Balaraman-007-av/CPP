#include<iostream>
using namespace std;
int main()
{
    int b=10,c=3;
    int& a=b;
    cout<<"size of a:"<<sizeof(a)<<endl;
    cout<<&a<<endl;
    cout<<&b<<endl;
    a=c;
    a++;
    cout<<a;
}