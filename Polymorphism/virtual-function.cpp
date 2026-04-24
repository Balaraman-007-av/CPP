#include<iostream>
using namespace std;
class Car
{
    public:
    virtual void start()
    {
        cout<<"Car is starting"<<endl;
    }
    virtual void stop()
    {
        cout<<"Car is stopping"<<endl;
    }
};
class Innova:public Car
{
    public:
    void start()
    {
        cout<<"Innova is starting"<<endl;
    }
    void stop()
    {
        cout<<"Innova is stopping"<<endl;
    }
};
class swift:public Car
{
    public:
    void start()
    {
        cout<<"Swift is starting"<<endl;
    }
    void stop()
    {
        cout<<"Swift is stopping"<<endl;
    }
};
int main()
{
    Car *c= new Innova();
    c->start();
    c->stop();
    c= new swift();
    c->start();
    c->stop();
    return 0;
}