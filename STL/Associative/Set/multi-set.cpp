#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> s1;
    multiset<int, greater<int>> s2;

    // Insert into s1
    for (int i = 0; i < 5; i++)
        s1.insert(i + 1);

    for (int i = 0; i < 5; i++)
        s1.insert(i + 1);

    // Insert into s2
    for (int i = 0; i < 5; i++)
        s2.insert((i + 1) * 10);

    for (int i = 0; i < 5; i++)
        s2.insert((i + 1) * 10);

    // Traversal
    cout << "Multiset s1: ";
    for (auto it = s1.begin(); it != s1.end(); it++)
        cout << *it << " ";
    cout << endl;

    cout << "Multiset s2: ";
    for (auto it = s2.begin(); it != s2.end(); it++)
        cout << *it << " ";
    cout << endl;

    // Deletion
    s1.erase(1);  // remove all 1s
    s2.erase(s2.begin(), s2.find(10));

    cout << "After deletion, size of s1: " << s1.size() << endl;

    // Find
    int val = 4;
    if (s1.find(val) != s1.end())
        cout << "s1 contains " << val << endl;
    else
        cout << "s1 does not contain " << val << endl;

    // Display again
    cout << "New elements of s1: ";
    for (auto it = s1.begin(); it != s1.end(); it++)
        cout << *it << " ";
    cout << endl;

    // Clear and empty
    s1.clear();

    if (s1.empty())
        cout << "s1 is empty";

    return 0;
}