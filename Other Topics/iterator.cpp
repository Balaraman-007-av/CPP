#include<iostream>
using namespace std;
int main()
{
    string::iterator iter;
    string str = "Sri Eshwar College of Engineering";
    for(iter = str.begin(); iter!=str.end();iter++)
    {
        cout<<*iter;
    }
    cout<<endl;
    string::reverse_iterator iter2;
    string str2 = "Sudha Mohanram";
    for(iter2=str2.rbegin(); iter2!=str2.rend();iter2++)
    {
        cout<<*iter2;
    }
;}