#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
    double a, b, c, bas, r, x1, x2;

    cout << "Digite a: ";
    cin >> a;

    cout << "Digite b: ";
    cin >> b;

    cout << "Digite c: ";
    cin >> c;

    bas = ((b * b) - 4 * a * c);
    r = sqrt(bas);

    x1 = (-b  + r) / (2 * a);
    x2 = (-b  - r) / (2 * a);

    cout << "x1 : " << x1 << endl;
    cout << "x2 : " << x2 << endl;
  
}