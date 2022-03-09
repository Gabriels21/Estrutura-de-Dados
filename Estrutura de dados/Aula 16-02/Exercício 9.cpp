#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
    double n1, n2, n3, n4, m;

    cout << "Digite o primeiro numero: ";
    cin >> n1;

    cout << "Digite o segundo numero: ";
    cin >> n2;

    cout << "Digite o terceiro numero: ";
    cin >> n3;

    cout << "Digite o quarto numero: ";
    cin >> n4;

    if(n1 > n2 && n1 > n3 && n1 > n4){

    cout << "Maior numero digitado: " << n1 << endl;

    } else if (n2 > n1 && n2 > n3 && n2 > n4){

    cout << "Maior numero digitado: " << n2 << endl;

    } else if(n3 > n1 && n3 > n2 && n3 > n4) {

    cout << "Maior numero digitado: " << n3 << endl;
    
    } else {

    cout << "Maior numero digitado: " << n4 << endl;
      
    }

    if(n1 < n2 && n1 < n3 && n1 < n4){

    cout << "Menor numero digitado: " << n1 << endl;

    } else if (n2 < n1 && n2 < n3 && n2 < n4){

    cout << "Menor numero digitado: " << n2 << endl;

    } else if(n3 < n1 && n3 < n2 && n3 < n4) {

    cout << "Menor numero digitado: " << n3 << endl;
    
    } else {

    cout << "Menor numero digitado: " << n4 << endl;
      
    }

    m = (n1 + n2 + n3 + n4) / 4;

    cout << "Media aritmetica dos numeros digitados: " << m;
  
}