#include <iostream>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout << "This is a vehicle base class" << endl;
    }
};

class fare
{
public:
    fare()
    {
        cout << "This is a fare base class" << endl;
    }
};

class car : public vehicle
{
public:
    car()
    {
        cout << "This is a car derived class from vehicle" << endl;
    }
};

class bus : public vehicle, public fare
{
public:
    bus()
    {
        cout << "This is a bus derived from both vehicle class and fare class" << endl;
    }
};

int main()
{
    car carobj;
    bus busobj;
    return 0;
}