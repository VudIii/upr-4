#include <iostream>
using namespace std;

int main() {
    double F, C;

    cout << "Vuvedi temperatura po Farenhait: ";
    cin >> F;

    C = (F - 32) / 1.8;

    cout << "Temperatura po Celzii: " << C << endl;

    return 0;
}