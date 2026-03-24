#include <iostream>
using namespace std;

int main() {
    double a, b, temp;

    cout << "Vuvedi purvoto chislo: ";
    cin >> a;
    cout << "Vuvedi vtoroto chislo: ";
    cin >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "Sled razmyanata:\n";
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}