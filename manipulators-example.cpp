#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // 1. endl – newline + flush
    cout << "1. endl:" << endl;

    // 2. flush – flush output buffer
    cout << "2. flush:" << flush << " (flushed)" << endl;

    // 3. setw(n) – set field width (next item only)
    cout << "3. setw(10): " << setw(10) << 42 << endl;

    // 4. setfill(c) – set padding character
    cout << "4. setfill('*'): " << setfill('*') << setw(10) << 42 << endl;

    // 5. left / right – alignment
    cout << "5. left: " << left << setw(10) << 42 << endl;
    cout << "6. right: " << right << setw(10) << 42 << endl;

    // 7. fixed – fixed‑point notation
    cout << "7. fixed: " << fixed << setprecision(2) << 3.14159 << endl;

    // 8. scientific – scientific notation
    cout << "8. scientific: " << scientific << 3.14159 << endl;

    // 9. setprecision(n) – decimal digits
    cout << "9. setprecision(4): " << setprecision(4) << 3.14159 << endl;

    // 10. showpoint – always show decimal point
    cout << "10. showpoint: " << showpoint << 123.0 << endl;

    // 11. noshowpoint – don’t show unnecessary decimal point
    cout << "11. noshowpoint: " << noshowpoint << 123.0 << endl;

    // 12. boolalpha – print true/false
    cout << "12. boolalpha: " << boolalpha << true << endl;

    // 13. noboolalpha – print 1/0
    cout << "13. noboolalpha: " << noboolalpha << true << endl;

    // 14. dec / oct / hex – number base
    int n = 255;
    cout << "14. dec: " << dec << n << endl;
    cout << "15. oct: " << oct << n << endl;
    cout << "16. hex: " << hex << n << endl;

    // 17. showbase – show base prefix (0, 0x, etc.)
    cout << "17. showbase: " << showbase << n << endl;

    // 18. noshowbase – don’t show base prefix
    cout << "18. noshowbase: " << noshowbase << n << endl;

    // 19. showpos – show + for positive numbers
    cout << "19. showpos: " << showpos << 42 << endl;

    // 20. noshowpos – don’t show + for positive
    cout << "20. noshowpos: " << noshowpos << 42 << endl;

    // 21. ws – skip leading whitespace (input)
    char c1, c2;
    cout << "Enter two chars (with space): ";
    cin >> c1;
    cin >> ws >> c2;  // ws skips whitespace
    cout << "21. ws: c1=" << c1 << ", c2=" << c2 << endl;

    // 22. ends – null‑terminate string (rarely used)
    cout << "22. ends: Hello" << ends;

    return 0;
}
