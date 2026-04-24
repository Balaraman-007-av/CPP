#include<iostream>
using namespace std;
template<class T,class U>
T maxnumber(T x, U y)
{
    return(x>y)?x:y;
}
int main()
{
    cout<<"Maximum of two integers:"<<maxnumber(5,10)<<endl;
    cout<<"Maximum of two double:"<<maxnumber(10.4,7.8)<<endl;
    return 0;
}