#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr = {3,4,5,6,7,7};
    vector<int>arr2(10,0);
    vector<int>arr3(arr);
    
    for(auto x:arr)
    cout<<x<<" ";
    cout<<endl;

    for(auto x:arr2)
    cout<<x<<" ";
    cout<<endl;

    for(auto x:arr3)
    cout<<x<<" ";
    cout<<endl;

    return 0;
}