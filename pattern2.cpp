#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the size of row:";
    cin>>n;
    i=n;
    do{

        j=i;
        do{
            cout<<j<<" ";
            j--;
        }
        while(j>=1);
        i--;
        cout<<"\n";
    }
    while(i>0);
}