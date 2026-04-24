#include <iostream>
#include <list>
using namespace std;

// condition for remove_if (remove even numbers)
bool isEven(int x)
{
    return x % 2 == 0;
}

int main()
{
    // Create two lists
    list<int> l1 = {1, 2, 3, 4, 5, 5, 3};
    list<int> l2 = {6, 7, 8};

    // remove() → remove value 3
    l1.remove(3);

    // remove_if() → remove even numbers
    l1.remove_if(isEven);

    // unique() → remove consecutive duplicates
    l1.unique();

    // sort() → sort list
    l1.sort();

    // reverse() → reverse list
    l1.reverse();

    // merge() → merge sorted lists
    l2.sort();
    l1.sort();
    l1.merge(l2);

    // splice() → transfer elements from one list to another
    list<int> l3 = {100, 200};
    l1.splice(l1.begin(), l3);

    // Display final list
    cout << "Final list: ";
    for (int x : l1)
        cout << x << " ";

    return 0;
}