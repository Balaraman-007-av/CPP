#include<iostream>
using namespace std;
class student{
    public:
    int rollno;
    float mark;

    void display(){
    cout<<"Rollno:"<<rollno<<endl;
    cout<<"Marks:"<<mark;
    }
};
int main()
{
    student s1;
    s1.rollno=1;
    s1.mark=99.99;
    s1.display();
    return 0;
}