#include<iostream>
using namespace std;
int main()
{
    string s="CPP Programming is Awesome!";
    cout<<"Size: "<<s.size()<<endl;
    cout<<"Capacity: "<<s.capacity()<<endl;
    s.resize(15);
    cout<<"Size: "<<s.size()<<endl;
    cout<<"Capacity: "<<s.capacity()<<endl;
    s.shrink_to_fit();
    cout<<"Capacity: "<<s.capacity()<<endl;
}