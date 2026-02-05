#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<setw(40)<<setfill('=')<<" STUDENT FEE RECEIPT "<<setw(25)<<setfill('=')<<""<<endl;
    cout<<setw(20)<<setfill(' ')<<left<<"Name"<<": Gayathri"<<endl;
    cout<<setw(20)<<"Register No"<<": 101"<<endl;
    cout<<setw(20)<<"Course"<<": CSE"<<endl;

    cout<<setw(40)<<right<<setfill('-')<<" FEE DETAILS "<<setw(25)<<setfill('-')<<""<<endl;
    cout<<setw(20)<<setfill(' ')<<left<<"Tution Fee"<<": "<<showpos<<45000.50<<endl;
    cout<<setw(20)<<"Hostel Fee"<<": "<<showpos<<35000.50<<endl;
    cout<<setw(20)<<"Total Fee"<<": "<<showpos<<55000.50<<endl;

    cout<<setw(40)<<right<<setfill('-')<<" REGISTER NUMBER SYSTEM "<<setw(25)<<setfill('-')<<""<<endl;
    cout<<setw(20)<<setfill(' ')<<left<<"Decimal"<<": "<<dec<<101<<endl;
    cout<<setw(20)<<"Octal"<<": "<<oct<<101<<endl;
    cout<<setw(20)<<"Hexadecimal"<<": "<<hex<<101<<endl;
    
}