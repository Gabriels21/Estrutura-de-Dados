#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
    double l1, l2,  l3;

    cout << "Digite o primeiro lado: ";
    cin >> l1;

    cout << "Digite o segundo lado: ";
    cin >> l2;

    cout << "Digite o terceiro lado: ";
    cin >> l3;

    if(l1 == l2 && l1 == l3 && l2 == l3){

    cout << "Triangulo equilatero";

    }

    else if (l1 == l2 || l1 == l3 || l2 == l3){

    cout << "Triangulo isosceles";

    } else {

    cout << "triangulo escaleno";
    
    }
}