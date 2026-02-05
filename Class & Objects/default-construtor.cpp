#include<iostream>
using namespace std;
class Test{
    public:
        Test()
        {
            cout<<"Default Constructor";
        }
};
int main()
{
    Test t; //Default Constructor is called
    return 0;
}