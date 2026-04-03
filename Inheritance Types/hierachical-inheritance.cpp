#include<iostream>
using namespace std;

class data
{
public:
    int x,y;
    void set_data(int first,int second)
    {
        x=first;
        y=second;
    }
};

class sum : public data
{
public:
    void sum_data()
    {
        cout<<"SUM:"<<x+y<<endl;
    }
};

class subraction : public data
{
public:
    void sub_data()
    {
        cout<<"SUBRACTION:"<<x-y<<endl;
    }
};
int main()
{
    sum sm;
    subraction sub;
    sm.set_data(2,5);
    sm.sum_data();
    sub.set_data(10,3);
    sub.sub_data();
    return 0;
}