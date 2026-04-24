#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    list<int> l2;

    // assign()
    l.assign(3, 10);   // 10 10 10

    // push_front()
    l.push_front(5);

    // emplace_front()
    l.emplace_front(1);

    // push_back()
    l.push_back(20);

    // emplace_back()
    l.emplace_back(30);

    cout << "After insertions: ";
    for (int x : l) cout << x << " ";
    cout << endl;

    // pop_front()
    l.pop_front();

    // pop_back()
    l.pop_back();

    cout << "After pop operations: ";
    for (int x : l) cout << x << " ";
    cout << endl;

    // insert()
    auto it = l.begin();
    advance(it, 1);
    l.insert(it, 99);

    // emplace()
    l.emplace(it, 50);

    cout << "After insert & emplace: ";
    for (int x : l) cout << x << " ";
    cout << endl;

    // erase()
    it = l.begin();
    l.erase(it);

    cout << "After erase: ";
    for (int x : l) cout << x << " ";
    cout << endl;

    // resize()
    l.resize(3);

    cout << "After resize: ";
    for (int x : l) cout << x << " ";
    cout << endl;

    // second list
    l2.assign({100, 200});

    // swap()
    l.swap(l2);

    cout << "After swap (l): ";
    for (int x : l) cout << x << " ";
    cout << endl;

    // clear()
    l.clear();

    cout << "After clear, size: " << l.size() << endl;

    return 0;
}