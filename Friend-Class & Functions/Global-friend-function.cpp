#include<iostream>
using namespace std;
class AccData{
    private:
        int acc_no,acc_pin;
    public:
        AccData(int a,int p)
        {
            acc_no=a;
            acc_pin=p;
        }    
        friend void printData(AccData);
};

void printData(AccData ad)
{
    cout<<"Account number: "<<ad.acc_no<<endl;
    cout<<"PIN: "<<ad.acc_pin;
}
int main()
{
    AccData ad(123,77);
    printData(ad);
}