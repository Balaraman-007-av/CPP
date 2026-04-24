#include <iostream>
#include <utility>   // for pair, make_pair
#include <tuple>     // for tie

using namespace std;

int main()
{
    // make_pair()
    pair<int, string> p1 = make_pair(1, "One");
    pair<int, string> p2 = make_pair(2, "Two");

    cout << "Before swapping:\n";
    cout << "p1 = " << p1.first << " " << p1.second << endl;
    cout << "p2 = " << p2.first << " " << p2.second << endl;

    // swap()
    p1.swap(p2);

    cout << "\nAfter swapping:\n";
    cout << "p1 = " << p1.first << " " << p1.second << endl;
    cout << "p2 = " << p2.first << " " << p2.second << endl;

    // tie()
    int num;
    string word;

    tie(num, word) = p1;   // unpack pair into variables

    cout << "\nUsing tie():\n";
    cout << "num = " << num << ", word = " << word << endl;

    return 0;
}