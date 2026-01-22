#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:\n";
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Sum of all array elements: "<<sum;
    return 0;
}