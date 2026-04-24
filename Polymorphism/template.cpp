#include <iostream>
using namespace std;

template <class T>
class Add {
public:
    T addNumbers(T a, T b); 
};

template <class T>
T Add<T>::addNumbers(T a, T b)
{
    return a + b;
}

int main()
{
    Add<int> obj1;
    Add<float> obj2;

    cout << "Sum of integers: " << obj1.addNumbers(10, 20) << endl;
    cout << "Sum of floats: " << obj2.addNumbers(5.5, 2.3) << endl;

    return 0;
}