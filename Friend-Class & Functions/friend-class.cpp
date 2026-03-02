#include<iostream>
using namespace std;
class ClassA;
class ClassB
{
    private:
        int x;
    public:
        ClassB()
        {
            x=10;
        }    
        friend class ClassA;
};
class ClassA
{
   public:
    void printData(ClassB &obj)
    {
        cout<<obj.x;
    }
};
int main()
{
    ClassB objB;
    ClassA objA;
    objA.printData(objB);
}