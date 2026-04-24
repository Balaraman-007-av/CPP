#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> fl;
    forward_list<int> fl2;

    // assign()
    fl.assign(3, 10);   // 10 10 10

    // push_front()
    fl.push_front(5);

    // emplace_front()
    fl.emplace_front(1);

    cout << "After assign, push_front, emplace_front: ";
    for (int x : fl) cout << x << " ";
    cout << endl;

    // pop_front()
    fl.pop_front();

    cout << "After pop_front: ";
    for (int x : fl) cout << x << " ";
    cout << endl;

    // insert_after()
    auto it = fl.begin();
    fl.insert_after(it, 20);

    // emplace_after()
    fl.emplace_after(it, 15);

    cout << "After insert_after & emplace_after: ";
    for (int x : fl) cout << x << " ";
    cout << endl;

    // erase_after()
    fl.erase_after(it);

    cout << "After erase_after: ";
    for (int x : fl) cout << x << " ";
    cout << endl;

    // resize()
    fl.resize(3);

    cout << "After resize: ";
    for (int x : fl) cout << x << " ";
    cout << endl;

    // second list
    fl2.assign({100, 200});

    // swap()
    fl.swap(fl2);

    cout << "After swap (fl): ";
    for (int x : fl) cout << x << " ";
    cout << endl;

    // clear()
    fl.clear();

    cout << "After clear, empty? " << (fl.empty() ? "Yes" : "No") << endl;

    return 0;
}