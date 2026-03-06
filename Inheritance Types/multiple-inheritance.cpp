#include<iostream>
using namespace std;

class base1
{
public:
    float salary = 10000;
};

class base2
{
public:
    float bonus = 1000;
};

class derived : public base1, public base2
{
public:
    void totalsalary()
    {
        cout << "The total salary is " << (salary + bonus) << endl;
    }
};

int main()
{
    derived deriobj;

    cout << "The salary of the employee " << deriobj.salary << endl;
    cout << "The bonus of the employee " << deriobj.bonus << endl;

    deriobj.totalsalary();

    return 0;
}