#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declare vectors
    vector<int> a;
    vector<int> a1, a2;

    // Assign 4 elements with value 7
    a.assign(4, 7);

    cout << "The vector contains: ";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    // Add element at end
    a.push_back(10);

    int n = a.size();
    cout << "The last element is: " << a[n - 1] << endl;

    // Remove last element
    a.pop_back();

    cout << "The vector contains: ";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    // Insert at beginning
    a.insert(a.begin(), 3);
    cout << "The first element is: " << a[0] << endl;

    // Erase first element
    a.erase(a.begin());
    cout << "The first element is: " << a[0] << endl;

    // Clear all elements
    a.clear();
    cout << "Vector size after clear(): " << a.size() << endl;

    // Add elements to a1 and a2
    a1.push_back(3);
    a1.push_back(4);

    a2.push_back(5);
    a2.push_back(6);

    // Print a1 and a2
    cout << "\nVector 1 is: ";
    for (int i = 0; i < a1.size(); i++)
        cout << a1[i] << " ";

    cout << "\nVector 2 is: ";
    for (int i = 0; i < a2.size(); i++)
        cout << a2[i] << " ";

    // Swap vectors
    a1.swap(a2);

    cout << "\nAfter Swap\nVector 1 is: ";
    for (int i = 0; i < a1.size(); i++)
        cout << a1[i] << " ";

    cout << "\nVector 2 is: ";
    for (int i = 0; i < a2.size(); i++)
        cout << a2[i] << " ";

    return 0;
}