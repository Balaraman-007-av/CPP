#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, string> um;

    // insert & emplace
    um.insert({1, "One"});
    um.insert({2, "Two"});
    um.emplace(3, "Three");

    // traversal
    cout << "Unordered Map:\n";
    for (auto x : um)
        cout << x.first << " " << x.second << endl;

    // find
    auto it = um.find(2);
    if (it != um.end())
        cout << "Found: " << it->second << endl;

    // erase
    um.erase(1);

    // clear
    um.clear();

    cout << "Empty? " << um.empty();

    return 0;
}