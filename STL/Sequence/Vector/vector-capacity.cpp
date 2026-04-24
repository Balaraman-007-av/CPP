#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> g1;

    // Insert elements
    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    // Size, Capacity, Max Size
    cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size : " << g1.max_size();

    // Resize vector to 4
    g1.resize(4);

    cout << "\nSize after resize : " << g1.size();

    // Check empty
    if (!g1.empty())
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";

    // Shrink capacity
    g1.shrink_to_fit();
    cout<<"Capacity after shrink to fit: "<<g1.capacity();

    // Print elements
    cout << "\nVector elements are: ";
    for (auto it = g1.begin(); it != g1.end(); it++)
        cout << *it << " ";

    cout << endl;

    return 0;
}