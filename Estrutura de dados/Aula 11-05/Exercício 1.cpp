#include <iostream>
#include <math.h>

using namespace std;

int main() {

  int a, b, soma, *pont1, *pont2;

  cout<< "Digite o primeiro numero: " << endl;
  cin >> a;

  cout<< "Digite o segundo numero: " << endl;
  cin >> b;

  pont1 = &a;
  pont2 = &b;

  soma = a + b;

  pont1 = &soma;
  
  cout << "Endereco de memoria da variavel a: " << pont1 << endl;
  cout << "Endereco de memoria da variavel b: " << pont2 << endl;
  cout << "Endereco de memoria de pont1: " << &pont1 << endl;
   cout << "Endereco de memoria de pont2: " << &pont2 << endl;
  cout << "Conteudo do pont1: " << *pont1 << endl;
  
}