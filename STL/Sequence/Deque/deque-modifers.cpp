#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d, d2;

    // assign()
    d.assign(3, 10);   // 10 10 10

    // push_front() and push_back()
    d.push_front(5);
    d.push_back(20);

    // emplace_front() and emplace_back()
    d.emplace_front(1);
    d.emplace_back(30);

    cout << "After insertions: ";
    for (int x : d) cout << x << " ";
    cout << endl;

    // pop_front() and pop_back()
    d.pop_front();
    d.pop_back();

    cout << "After pop operations: ";
    for (int x : d) cout << x << " ";
    cout << endl;

    // insert()
    auto it = d.begin() + 1;
    d.insert(it, 99);

    // emplace()
    d.emplace(it, 50);

    cout << "After insert & emplace: ";
    for (int x : d) cout << x << " ";
    cout << endl;

    // erase()
    d.erase(d.begin());

    cout << "After erase: ";
    for (int x : d) cout << x << " ";
    cout << endl;

    // resize()
    d.resize(4);

    cout << "After resize: ";
    for (int x : d) cout << x << " ";
    cout << endl;

    // second deque
    d2.assign({100, 200});

    // swap()
    d.swap(d2);

    cout << "After swap (d): ";
    for (int x : d) cout << x << " ";
    cout << endl;

    // clear()
    d.clear();
    cout << "After clear, size: " << d.size() << endl;

    return 0;
}