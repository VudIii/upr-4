#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;

    cout << "Vuvedi x: ";
    cin >> x;

    if (x <= 0) {
        cout << "Greshka! Za logaritmite x tryabva da e > 0." << endl;
    }
    else {
        y = fabs(pow(x, 5) + log(x) - log10(x));
        cout << "y = " << y << endl;
    }

    return 0;
}