#include <iostream>
#include <utility>   // for pair
using namespace std;

int main() {

    // 1. Using curly braces ()
    pair<int, string> p1 (1, "Apple");
    cout << "Method 1 ({}): " << p1.first << " " << p1.second << endl;

    // 2. Using make_pair()
    pair<int, string> p2 = make_pair(2, "Banana");
    cout << "Method 2 (make_pair): " << p2.first << " " << p2.second << endl;

    // 3. Default constructor + assignment
    pair<int, string> p3;
    p3.first = 3;
    p3.second = "Cherry";
    cout << "Method 3 (assignment): " << p3.first << " " << p3.second << endl;

    return 0;
}