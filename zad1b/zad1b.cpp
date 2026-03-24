#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Vuvedi purvoto chislo: ";
    cin >> a;
    cout << "Vuvedi vtoroto chislo: ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Sled razmyanata:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}