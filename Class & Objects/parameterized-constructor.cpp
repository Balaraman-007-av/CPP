#include<iostream>
using namespace std;
class Test{
    public:
        Test(int a)
        {
            cout<<a;
        }
};
int main()
{
    Test t(10); //sending arguments
    return 0;
}