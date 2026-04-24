#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> g1;

    // Insert elements (10, 20, ..., 100)
    for (int i = 1; i <= 10; i++)
        g1.push_back(i * 10);

    // Access using []
    cout << "Reference operator [] : g1[2] = "
         << g1[2];

    // Access using at()
    cout << "\nat() : g1.at(4) = "
         << g1.at(4);

    // First element - returns reference - alias of the first element like that
    cout << "\nfront() : g1.front() = "
         << g1.front();

    // Last element
    cout << "\nback() : g1.back() = "
         << g1.back();

    // Pointer to first element
    int* pos = g1.data();

    cout << "\nThe first element is " << *pos;

    return 0;
}