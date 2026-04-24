#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, string> mm;

    // insert & emplace
    mm.insert({1, "One"});
    mm.insert({1, "Uno"});
    mm.emplace(2, "Two");

    // traversal
    cout << "Multimap elements:\n";
    for (auto x : mm)
        cout << x.first << " " << x.second << endl;

    // find (first occurrence)
    auto it = mm.find(1);
    if (it != mm.end())
        cout << "Found: " << it->second << endl;

    // erase all key=1
    mm.erase(1);

    cout << "After erase:\n";
    for (auto x : mm)
        cout << x.first << " " << x.second << endl;

    return 0;
}