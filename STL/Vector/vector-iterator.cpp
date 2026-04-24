#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> g1;

    // Insert elements
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    // begin() and end() - can modify
    cout << "Output of begin and end: ";
    for (auto i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";

    // cbegin() and cend() - can't modify
    cout << "\nOutput of cbegin and cend: ";
    for (auto i = g1.cbegin(); i != g1.cend(); ++i)
        cout << *i << " ";

    // rbegin() and rend()
    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << " ";

    // crbegin() and crend()
    cout << "\nOutput of crbegin and crend: ";
    for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
        cout << *ir << " ";

    return 0;
}