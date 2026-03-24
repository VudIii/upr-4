#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, p, S;

    cout << "Vuvedi strana a: ";
    cin >> a;
    cout << "Vuvedi strana b: ";
    cin >> b;
    cout << "Vuvedi strana c: ";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a) {
        p = (a + b + c) / 2.0;
        S = sqrt(p * (p - a) * (p - b) * (p - c));

        cout << "Liceto na triugulnika e: " << S << endl;
    }
    else {
        cout << "Nevalidni strani! Takuv triugulnik ne sushtestvuva." << endl;
    }

    return 0;
}