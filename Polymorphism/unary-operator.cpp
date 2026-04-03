#include<iostream>
using namespace std;
class Distance
{
    int feet;
    int inch;
    public:
        Distance(int f,int i)
        {
            feet=f;
            inch=i;
        }
        void operator + ()
        {
            feet++;
            inch++;
            cout<<"After increment feet and inch "<<feet<<" "<<inch<<endl;
        }
};
int main()
{
    Distance d(10,12);
    +d;
    return 0;
}