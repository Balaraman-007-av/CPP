#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq1, pq2;

    // push()
    pq1.push(10);
    pq1.push(20);

    // emplace()
    pq1.emplace(30);
    pq1.emplace(40);

    // top()
    cout << "Top element: " << pq1.top() << endl;

    // size()
    cout << "Size: " << pq1.size() << endl;

    // empty()
    if (pq1.empty())
        cout << "Queue is empty\n";
    else
        cout << "Queue is not empty\n";

    // pop()-remove highest priority value
    pq1.pop();
    cout << "Top after pop: " << pq1.top() << endl;

    // second priority queue
    pq2.push(5);
    pq2.push(15);

    // swap()
    pq1.swap(pq2);

    cout << "After swap, top of pq1: " << pq1.top() << endl;

    return 0;
}