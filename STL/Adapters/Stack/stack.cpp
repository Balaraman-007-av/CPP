#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s1, s2;

    // push()
    s1.push(10);
    s1.push(20);

    // emplace()
    s1.emplace(30);

    cout << "Top element: " << s1.top() << endl;

    // size()
    cout << "Size: " << s1.size() << endl;

    // empty()
    cout << "Is empty? " << (s1.empty() ? "Yes" : "No") << endl;

    // pop()
    s1.pop();

    cout << "Top after pop: " << s1.top() << endl;

    // second stack
    s2.push(100);
    s2.push(200);

    // swap()
    s1.swap(s2);

    cout << "After swap, top of s1: " << s1.top() << endl;

    return 0;
}