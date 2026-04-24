#include<iostream>
using namespace std;
template<class T>
class Addition
{
    public:
        T a;
        T b;
        Addition(T num1, T num2)
        {
            a = num1;
            b = num2;
        }
        T add();
};
template<class T>
T Addition<T>::add()
{
    return a+b;
}

int main()
{
    Addition<int> intadd(10,20);
    Addition<double> doubleadd(12.5,2.5);
    cout<<"The Integer Addition "<<intadd.add()<<endl;
    cout<<"The double Addition "<<doubleadd.add()<<endl;
    return 0;
}
