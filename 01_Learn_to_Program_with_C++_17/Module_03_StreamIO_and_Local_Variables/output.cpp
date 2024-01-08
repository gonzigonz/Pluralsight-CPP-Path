#include <iostream>

// use explicit namespace types
using std:: cout;
using std:: cin;

int main() {
    cout << "Hello" << '\n';
    cout << 34 << '\n';

    cout << '\n' << '\n';

    int i = 2 + 2;
    cout << i << '\n';
    i = i * 3;
    cout << i << '\n';

    cout << '\n' << '\n';

    // type safety; be careful.
    // e.g. of data loss
    i = 4.9;
    int j = 9/5;
    cout << "i is " << i << '\n' << "j is " << j << '\n';

    // e.g. of correct use
    float f = 4.9;
    cout << "f is " << f << '\n';
    f = 9.0/5;
    cout << "f is " << f << '\n';

    cout << '\n' << '\n';

    cout << "Enter a number:";
    cin >> i;
    cout << "You entered: " << i << '\n';
}