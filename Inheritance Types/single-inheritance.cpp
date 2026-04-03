#include<iostream>
using namespace std;

class base
{
public:
    float salary = 10000;
};

class derived : public base
{
public:
    float bonus = 1000;

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