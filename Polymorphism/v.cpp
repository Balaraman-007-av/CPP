#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void function1()
    {
        cout<<"base class function1"<<endl;
    }
    virtual void function2()
    {
        cout<<"base class function2"<<endl;
    }
    virtual void function3()
    {
        cout<<"base class function3"<<endl;
    }
};
class Derived1:public Base
{
    public:
    void function1()
    {
        cout<<"derived 1 class function1"<<endl;
    }
    void function2()
    {
        cout<<"derived 1 class function2"<<endl;
    }
};
class Derived2:public Base
{
    public:
    void function1()
    {
        cout<<"derived 2 class function1"<<endl;
    }
    void function3()
    {
        cout<<"derived 2 class function3"<<endl;
    }
};
int main()                      
{
    Base *ptr=new Base;
    Derived1 *d1=new Derived1;
    Derived2 *d2=new Derived2;
    ptr->function1();
    ptr->function2();
    ptr->function3();
   
    d1->function1();
    d1->function2();
    d1->function3();   
   
    d2->function1();
    d2->function2();
    d2->function3();
    return 0;
}