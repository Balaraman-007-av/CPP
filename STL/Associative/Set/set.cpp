#include <iostream>
#include <set>
using namespace std;

int main()
{
    // Step 1: Create an empty set
    set<int> s;

    // Step 2: Insert elements
    s.insert(5);
    s.insert(2);
    s.insert(8);
    s.insert(1);
    s.insert(3);
    s.insert(2); // duplicate ignored
    s.insert(7);
    s.insert(6);
    s.insert(4);

    cout << "Elements after insertion:\n";
    for (auto x : s)
        cout << x << " ";
    cout << endl;

    // Step 3: Find an element
    auto it = s.find(3);
    if (it != s.end())
        cout << "Element found using find(): " << *it << endl;
    else
        cout << "Element not found" << endl;

    // Step 4: Count an element
    if (s.count(5))
        cout << "5 exists in the set" << endl;
    else
        cout << "5 does not exist in the set" << endl;

    // Step 5: Traverse using range-based loop
    cout << "Traversing using range-based loop:\n";
    for (auto x : s)
        cout << x << " ";
    cout << endl;

    // Step 6: Traverse using iterators
    cout << "Traversing using iterators:\n";
    for (auto itr = s.begin(); itr != s.end(); ++itr)
        cout << *itr << " ";
    cout << endl;

    // Step 7: Delete by value
    s.erase(2);

    // Step 8: Delete by iterator (first element)
    s.erase(s.begin());

    cout << "Elements after deletion:\n";
    for (auto x : s)
        cout << x << " ";
    cout << endl;

    return 0;
}