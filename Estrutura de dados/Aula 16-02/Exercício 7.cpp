#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
    int ano;

    cout << "Digite o ano: ";
    cin >> ano;

    if(ano % 2 == 0 && ano % 100 != 0){

    cout << "Ano bissexto";

    }

    else if (ano % 400 == 0){

    cout << "Ano bissexto";

    } else {

    cout << "Esse ano nao e bissexto";
    
    }
}