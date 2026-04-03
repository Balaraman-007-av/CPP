#include<iostream>
using namespace std;

class Student {
public:
    static int count;

    Student() {
        count++;
    }
};

int Student::count = 0;   // Definition

int main() {
    Student s1, s2, s3;
    cout << "Total Objects: " << Student::count;
}