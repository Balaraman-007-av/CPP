#include<iostream>
using namespace std;
class Parent
{
    public:
    //Overridden Function
        void print()
        {
            cout<<"Base function"<<endl;
        }
};

class Child:public Parent
{
    public:
        void print()
        {
            cout<<"Derived function"<<endl;
            //1. Call the Overridden Function from the derived class
            //Parent::print();
        }
};

int main()
{
    Child Child_Derived;
    //2. Call the Overridden function using the pointers of the base class and point them with the derived class object.
    Parent *ptr=&Child_Derived;
    ptr->print();
    Child_Derived.print();
    //3. Access the Overridden fjunction using the base class directly
    Child_Derived.Parent::print();
    return 0;
}