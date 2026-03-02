#include<iostream>
using namespace std;

class Student {
public:
    static int count;

    static void showCount() {
        cout << "Count = " << count;
    }
};

int Student::count = 5;

int main() {
    Student::showCount();   // Called using class name
}