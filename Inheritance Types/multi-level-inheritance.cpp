#include<iostream>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout<<"This is a Vehicle Base Class"<<endl;
    }
};
class flyingvehicle : public vehicle
{
public:
    flyingvehicle()
    {
        cout<<"This is a flying vehicle"<<endl;
    }
};
class Aeroplane : public flyingvehicle
{
public:
    Aeroplane()
    {
        cout<<"The Aeroplane has wings to fly"<<endl;
    }
};
int main()
{
    Aeroplane obj;
    return 0;
}