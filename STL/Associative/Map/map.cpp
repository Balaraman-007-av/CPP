#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    // insert & emplace
    m.insert({1, "One"});
    m.insert({2, "Two"});
    m.emplace(3, "Three");

    // traversal
    cout << "Map elements:\n";
    for (auto x : m)
        cout << x.first << " " << x.second << endl;

    // find
    auto it = m.find(2);
    if (it != m.end())
        cout << "Found: " << it->second << endl;

    // erase
    m.erase(1);

    // size
    cout << "Size: " << m.size() << endl;

    // clear
    m.clear();
    cout << "After clear, empty? " << m.empty();

    return 0;
}