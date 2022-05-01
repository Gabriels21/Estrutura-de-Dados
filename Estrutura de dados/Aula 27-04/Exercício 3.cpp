#include <iostream>
#include <math.h>

using namespace std;

class Estacionamento{

public: 

int a, b, c;

void entrada(){
    cout << "Digite o dia: " << endl;
    cin >> a;
    cout << endl;

    cout << "Digite a hora de entrada: " << endl;
    cin >> b;
    cout << endl;

    cout << "Digite a hora de saida: " << endl;
    cin >> c;
    cout << endl;
}

int preco(){
    return (c - b) * 5;
}
};


int main() {

  Estacionamento obj;
  obj.entrada();
  
  cout << "Valor do estacionamento R$: " << obj.preco();
  
}