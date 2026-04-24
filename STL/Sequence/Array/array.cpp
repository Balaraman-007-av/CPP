#include <iostream>
#include <array>   // for array, at()
#include <tuple>   // for get()
#include <bits/stdc++.h> 

using namespace std;

int main()
{
    // Initializing the array elements
    array<int, 6> ar = {1, 2, 3, 4, 5, 6};
    array<int, 6> ar1 = {7, 8, 9, 10, 11, 12};
    
    // Using at() - complile time
    cout << "The array elements are (using at()) : ";
    for (int i = 0; i < 6; i++)
        cout << ar.at(i) << " ";
    cout << endl;

    // Using get() - runtime 
    cout << "The array elements are (using get()) : ";
    cout << get<0>(ar) << " " << get<1>(ar) << " "
         << get<2>(ar) << " " << get<3>(ar) << " "
         << get<4>(ar) << " " << get<5>(ar) << " ";
    cout << endl;

    // Using operator[]
    cout << "The array elements are (using operator[]) : ";
    for (int i = 0; i < 6; i++)
        cout << ar[i] << " ";
    cout << endl;

    // First element - returns first element reference
    cout << "First element of array is : ";
    int &a = ar.front();
    cout << a << endl;

    // Last element - returns last element reference
    cout << "Last element of array is : ";
    int &b = ar.back();
    cout << b << endl;

    // Modify first and last elements
    a = 10;
    b = 60;

    // Print updated array
    cout << "Array after updating first and last element:\n";
    for (auto x : ar)
        cout << x << " ";
    cout << endl;

    // Size and max_size
    cout << "The number of array elements is : ";
    cout << ar.size() << endl;

    cout << "Maximum elements array can hold is : ";
    cout << ar.max_size() << endl;

    // Before swapping
    cout << "The first array before swapping: ";
    for (int i = 0; i < 6; i++)
        cout << ar[i] << " ";
    cout << endl;

    cout << "The second array before swapping: ";
    for (int i = 0; i < 6; i++)
        cout << ar1[i] << " ";
    cout << endl;

    // Swap
    ar.swap(ar1);

    // After swapping
    cout << "The first array after swapping: ";
    for (int i = 0; i < 6; i++)
        cout << ar[i] << " ";
    cout << endl;

    cout << "The second array after swapping: ";
    for (int i = 0; i < 6; i++)
        cout << ar1[i] << " ";
    cout << endl;

    // Empty check
    array<int, 0> emptyArray;

    emptyArray.empty() ? cout << "Array empty"
                       : cout << "Array not empty";
    cout << endl;

    // Fill function
    ar.fill(0);

    cout << "Array after filling operation: ";
    for (int i = 0; i < 6; i++)
        cout << ar[i] << " ";
    cout << endl;

    return 0;
}