#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
    int idade;

    cout << "Digite a idade de uma pessoa: ";
    cin >> idade;

    if(idade <= 11){

    cout << "Crianca";

    }

    else if(idade <= 17){

    cout << "Adolescente";

    }

    else if(idade == 18 || idade <= 49){

    cout << "Adulta";

    }

    else {
    
    cout << "Idosa";

    }
}