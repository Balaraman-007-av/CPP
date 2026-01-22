#include<iostream>
using namespace std;
int main()
{
    int r,c,i,temp;
    cout<<"Enter the row and column of the matrix:\n";
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter matrix elements:\n";
    for(int i=0;i<r;i++) 
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix:\n";
    for(int i=0;i<r;i++) 
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(i=0;i<r;i++)
    {
        temp=arr[i][0];
        arr[i][0]=arr[i][c-1];
        arr[i][c-1]=temp;
    }
    cout<<"After interchange rows:\n";
    for(int i=0;i<r;i++) 
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}