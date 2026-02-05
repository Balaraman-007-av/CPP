#include <iostream>
using namespace std;

int main() {
    int row;
    cout<<"Enter size of the row:";
    cin>>row;
    
    int col1 = 0;
    int col2 = 10;
    int col3 = 20;

    for (int i = 1; i <= row; i++) {
        cout << col1 << " " << col2 << " " << col3 << endl;

        col1 = col1 + (20 - i); 
        col2 = col2 + 1;        
        col3 = col3 - 1;        
    }
    return 0;
}
