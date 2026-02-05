#include <iostream>
#include <string>
#include <algorithm>   // for sort, reverse, transform
using namespace std;

int main()
{
    // Creating strings
    string s1 = "Hello";
    string s2 = "World";
    string s3;

    cout << "Initial strings:" << endl;
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;

    // 1. length() / size() – find length of string
    cout << "\nLength of s1: " << s1.length() << endl;

    // 2. Assignment (=)
    s3 = s1;
    cout << "After assignment, s3 = " << s3 << endl;

    // 3. Concatenation ( + and append )
    string s4 = s1 + " " + s2;
    cout << "Using + operator: " << s4 << endl;

    s1.append(" Everyone");
    cout << "Using append(): " << s1 << endl;

    // 4. Access characters (at and [])
    cout << "\nFirst character of s2: " << s2[0] << endl;
    cout << "Second character of s2 using at(): " << s2.at(1) << endl;

    // 5. clear() – removes all characters
    string temp = "Temporary";
    temp.clear();
    cout << "\nAfter clear(), temp = \"" << temp << "\"" << endl;

    // 6. empty() – checks whether string is empty
    if (temp.empty())
        cout << "temp string is empty" << endl;

    // 7. compare() – compares two strings
    string a = "Apple";
    string b = "Banana";
    cout << "\nComparing Apple and Banana: " << a.compare(b) << endl;
    // 0 → equal, negative → smaller, positive → greater

    // 8. erase() – removes part of string
    string e = "Programming";
    e.erase(3, 4);   // removes 4 characters from index 3
    cout << "\nAfter erase(): " << e << endl;

    // 9. find() – finds position of substring
    string f = "I love C++ programming";
    cout << "Position of \"C++\": " << f.find("C++") << endl;

    // 10. insert() – inserts string at given position
    string ins = "Hello World";
    ins.insert(6, "Beautiful ");
    cout << "\nAfter insert(): " << ins << endl;

    // 11. substr() – extracts part of string
    string sub = "ComputerScience";
    cout << "Substring: " << sub.substr(8, 7) << endl;

    // 12. replace() – replaces part of string
    string rep = "I like Java";
    rep.replace(7, 4, "C++");
    cout << "\nAfter replace(): " << rep << endl;

    // 13. push_back() and pop_back()
    string pb = "Code";
    pb.push_back('!');
    cout << "\nAfter push_back(): " << pb << endl;
    pb.pop_back();
    cout << "After pop_back(): " << pb << endl;

    // 14. reverse() – reverse the string
    string rev = "ABCDE";
    reverse(rev.begin(), rev.end());
    cout << "\nReversed string: " << rev << endl;

    // 15. sort() – sort characters
    string sortStr = "dcba";
    sort(sortStr.begin(), sortStr.end());
    cout << "Sorted string: " << sortStr << endl;

    // 16. transform() – change to uppercase
    string upper = "hello";
    transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
    cout << "Uppercase: " << upper << endl;

    return 0;
}
