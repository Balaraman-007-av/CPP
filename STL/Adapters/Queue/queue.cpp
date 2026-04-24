#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q1, q2;

    // push()
    q1.push(10);
    q1.push(20);

    // emplace()
    q1.emplace(30);

    // front() and back()
    cout << "Front element: " << q1.front() << endl;
    cout << "Back element: " << q1.back() << endl;

    // size()
    cout << "Size: " << q1.size() << endl;

    // empty()
    cout << "Is empty? " << (q1.empty() ? "Yes" : "No") << endl;

    // pop()
    q1.pop();

    cout << "Front after pop: " << q1.front() << endl;

    // second queue
    q2.push(100);
    q2.push(200);

    // swap()
    q1.swap(q2);

    cout << "After swap, front of q1: " << q1.front() << endl;

    return 0;
}