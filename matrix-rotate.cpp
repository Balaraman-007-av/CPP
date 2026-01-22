#include<iostream>
using namespace std;
int main()
{
    int r,c,i,temp,n;
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
    cout<<"Enter number of rotations:";
    cin>>n;
    cout<<"Matrix:\n";
    for(int i=0;i<r;i++) 
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(i=0;i<n;i++)
    {
        temp=arr[0][0];
        arr[0][0]=arr[r-1][c-i-1];
        arr[r-1][c-1]=temp;
    }
    cout<<"After "<<n<<" rotations\n";
    for(int i=0;i<r;i++) 
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}