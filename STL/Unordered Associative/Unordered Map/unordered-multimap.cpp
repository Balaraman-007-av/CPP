#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_multimap<int, string> umm;

    // insert & emplace
    umm.insert({1, "One"});
    umm.insert({1, "Uno"});
    umm.emplace(2, "Two");

    // traversal
    cout << "Unordered Multimap:\n";
    for (auto x : umm)
        cout << x.first << " " << x.second << endl;

    // find (first occurrence)
    auto it = umm.find(1);
    if (it != umm.end())
        cout << "Found: " << it->second << endl;

    // erase one occurrence
    if (it != umm.end())
        umm.erase(it);

    cout << "After erase:\n";
    for (auto x : umm)
        cout << x.first << " " << x.second << endl;

    return 0;
}