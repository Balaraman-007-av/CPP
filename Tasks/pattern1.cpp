#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the number of rows:"<<endl;
    cin>>n;
    i=1;
    while(i<n)
    {
        k=1;
        while(k<=(n-i)*2)
        {
            cout<<" ";
            k++;
        }
        j=i;
        while(j>=1) 
        {
            cout<<j<<" ";
            j--;
        }
        cout<<"\n";
        i++;
    }
    return 0;
}