#include<iostream>
using namespace std;

class Distance {
public:
    int feet;
    int inch;

    Distance() {
        this->feet = 0;
        this->inch = 0;
    }

    Distance(int f, int i) {
        this->feet = f;
        this->inch = i;
    }

    Distance operator + (Distance const& dobj) {
        Distance d;
        d.feet = feet + dobj.feet;
        d.inch = inch + dobj.inch;
        return d;
    }
};

int main() {
    Distance d1(10, 12);
    Distance d2(12, 14);
    Distance d3 = d1 + d2;

    cout << "After increment feet and inch using binary operator: "
         << d3.feet << " feet " << d3.inch << " inches" << endl;

    return 0;
}