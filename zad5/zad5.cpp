#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, alphaDegrees, alphaRadians;
    double x1, y1;

    cout << "Vuvedi x: ";
    cin >> x;
    cout << "Vuvedi y: ";
    cin >> y;
    cout << "Vuvedi ugul alpha (v gradusi): ";
    cin >> alphaDegrees;

    alphaRadians = alphaDegrees * acos(-1.0) / 180.0;

    x1 = x * cos(alphaRadians) - y * sin(alphaRadians);
    y1 = x * sin(alphaRadians) + y * cos(alphaRadians);

    cout << "Novite koordinati sa:" << endl;
    cout << "x1 = " << x1 << endl;
    cout << "y1 = " << y1 << endl;

    return 0;
}