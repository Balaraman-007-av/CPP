#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;

    s.insert(12);
    s.insert(10);
    s.insert(2);
    s.insert(10); // duplicate ignored
    s.insert(90);
    s.insert(85);
    s.insert(45);
    s.insert(12); // duplicate ignored
    s.insert(70);

    unordered_set<int>::iterator it, it1;

    cout << "Unordered_set elements (Note: Not sorted):\n";
    for (it = s.begin(); it != s.end(); it++)
        cout << *it << " ";
    cout << '\n';

    it1 = s.find(10);

    // erase element 10 if found
    if (it1 != s.end())
        s.erase(it1);

    cout << "Unordered_set elements after erase:\n";
    for (it = s.begin(); it != s.end(); it++)
        cout << *it << " ";

    return 0;
}