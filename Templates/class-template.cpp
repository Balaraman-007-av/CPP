#include<iostream>
using namespace std;
template<class A>
class FindMax
{
    public:
        A findMax(A a, A b)
        {
            return a>b? a:b;
        }
};
int main()
{
    FindMax<int>obj1;
    FindMax<float>obj2;
    FindMax<char>obj3;
    cout<<obj1.findMax(3,4)<<endl;
    cout<<obj2.findMax(2.3,4.5)<<endl;
    cout<<obj3.findMax('a','B')<<endl;
    return 0;
}