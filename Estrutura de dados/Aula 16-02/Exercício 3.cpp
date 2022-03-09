#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
    int b, a, r;

    cout << "Digite a base do triangulo: " << endl;
    cin >> b;

    cout << "Digite a altura do triangulo: " << endl;
    cin >> a;

    r = (b * a) / 2;

    cout << "Area do triangulo: " << r << endl;
}