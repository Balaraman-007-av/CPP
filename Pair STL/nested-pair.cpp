#include<iostream>
using namespace std;
#include<utility>
#include<tuple>

int main()
{
    pair<int,pair<int ,int>> pair3 = {1,{2,3}};

    int x, y, z;  

    tie(x, ignore) = pair3;       // ignore inner pair
    tie(y, z) = pair3.second;     // unpack inner pair

    cout << x << " " << y << " " << z;

    return 0;
}