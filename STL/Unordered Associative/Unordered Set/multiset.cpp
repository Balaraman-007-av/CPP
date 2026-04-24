#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_multiset<int> s;

    s.insert(12);
    s.insert(10);
    s.insert(2);
    s.insert(10); // duplicate allowed
    s.insert(90);
    s.insert(85);
    s.insert(45);

    unordered_multiset<int>::iterator it, it1;

    cout << "Unordered-Multiset (Note: Not sorted, duplicates allowed):\n";
    for (it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << '\n';

    it1 = s.find(10);

    // erase one occurrence of 10
    if (it1 != s.end())
        s.erase(it1);

    cout << "Unordered-Multiset elements after erase:\n";
    for (it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    return 0;
}