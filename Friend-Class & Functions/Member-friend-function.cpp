//Member function of another class as friend function
#include<iostream>
using namespace std;
class ClassA;
class ClassB
{
    public:
        void showdata(ClassA &obj);//Reference is used for efficiency and correctness
};
class ClassA
{
    private:    
        int x;
    public:
        ClassA(int n)
        {
            x=n;
        }    
    friend void ClassB::showdata(ClassA &obj);     
};
void ClassB::showdata(ClassA &obj)
{
    cout<<obj.x;
};
int main()
{
    ClassA a(10);
    ClassB b;
    b.showdata(a);
}
