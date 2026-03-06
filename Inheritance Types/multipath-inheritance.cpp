#include<iostream>
using namespace std;
class A
{
    public:
        int a;
};

class B: public A
{
    public:
        int b;
};

class C: public A
{
    public:
        int c;
};

class D: public B, public C
{
    public:
        int d;
};

int main()
{
    D objd;
    objd.B::a=10;
    objd.b=20;
    cout<<"Value a:"<<objd.B::a<<endl;
    cout<<"Value b:"<<objd.b<<endl;
    return 0;
}