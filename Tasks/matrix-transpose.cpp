#include<iostream>
using namespace std;
int main()
{
    int r,c,sum=0;
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
    cout<<"Transpose of the array:\n";
    for(int i=0;i<r;i++) 
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}