#include<iostream>
using namespace std;
class Test
{
    public:
        ~Test()
        {
            cout<<"Destructor"<<endl;
        }
};
int main()
{
    Test t;
}