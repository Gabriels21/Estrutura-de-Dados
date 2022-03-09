#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
    int b, b2, a, r;

    cout << "Digite a base maior do trapezio: " << endl;
    cin >> b;

    cout << "Digite a base menor do trapezio: " << endl;
    cin >> b2;

    cout << "Digite a altura do trapezio: " << endl;
    cin >> a;

    r = (b + b2) * a / 2;

    cout << "Area do trapezio : " << r << endl;
}