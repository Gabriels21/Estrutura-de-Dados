#include <iostream>
#include <math.h>

using namespace std;

class Calculadora{

public: 

float a, b;

void entrada(){
    cout << "Digite dois numeros: " << endl;
    cin >> a >> b;
    cout << endl;
}

int adicao(){
    return a + b;
}


int sub(){
    return a - b;
}


int multi(){
    return a * b;
}

int div(){
    while(b == 0){
        cout << "Digite um numero maior que 0: ";
        cin >> b;
    }
    return a / b;
}
};


int main() {

  Calculadora obj;
  obj.entrada();
  
  cout << "Adicao: " << obj.adicao() << endl;
  cout << "Subtracao: " << obj.sub() << endl;
  cout << "Multiplicacao: " << obj.multi() << endl;
  cout << "Divisao: " << obj.div() << endl;
  
}