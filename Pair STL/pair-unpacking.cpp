#include <iostream>
#include <utility>   // for pair
#include <tuple>     // for tie, ignore
using namespace std;

int main() {

    pair<int, string> p (1, "Apple");

    int a;
    string b;
    tie(a, b) = p;
    cout << "\nUsing tie():\n";
    cout << a << " " << b << endl;

    int x;
    tie(x, ignore) = p;   // ignore second value
    cout << "\nUsing ignore:\n";
    cout << x << endl;

    return 0;
}