#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Min Heap (smallest element on top)
    priority_queue<int, vector<int>, greater<int>> pq;

    // push()
    pq.push(30);
    pq.push(10);
    pq.push(20);

    // emplace()
    pq.emplace(5);

    // top()
    cout << "Top (smallest): " << pq.top() << endl;

    // size()
    cout << "Size: " << pq.size() << endl;

    // empty()
    cout << "Is empty? " << (pq.empty() ? "Yes" : "No") << endl;

    // pop()
    pq.pop();
    cout << "Top after pop: " << pq.top() << endl;

    return 0;
}