#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declare vectors
    vector<int> a;
    vector<int> a1, a2;

    // assign()
    a.assign(4, 7);

    cout << "The vector contains: ";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    // push_back() - add already constructed object
    a.push_back(10);

    cout << "Last element (push_back): " << a.back() << endl;

    // emplace_back() - contruct the object in-place directly within the container's memory
    a.emplace_back(20);

    cout << "Last element (emplace_back): " << a.back() << endl;

    // pop_back()
    a.pop_back();

    cout << "After pop_back: ";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    // insert()
    a.insert(a.begin(), 3);

    // emplace()
    a.emplace(a.begin() + 1, 99);

    cout << "After insert & emplace: ";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    // erase()
    a.erase(a.begin());

    cout << "After erase: ";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    // clear()
    a.clear();
    cout << "Size after clear(): " << a.size() << endl;

    // push_back for a1 and a2
    a1.push_back(3);
    a1.push_back(4);

    a2.push_back(5);
    a2.push_back(6);

    cout << "\nVector 1: ";
    for (int i = 0; i < a1.size(); i++)
        cout << a1[i] << " ";

    cout << "\nVector 2: ";
    for (int i = 0; i < a2.size(); i++)
        cout << a2[i] << " ";

    // swap()
    a1.swap(a2);

    cout << "\nAfter swap\nVector 1: ";
    for (int i = 0; i < a1.size(); i++)
        cout << a1[i] << " ";

    cout << "\nVector 2: ";
    for (int i = 0; i < a2.size(); i++)
        cout << a2[i] << " ";

    return 0;
}