#include <iostream>
#include <math.h>

using namespace std;

int main() {

  int a, b, c, *pt1, *pt2, *pt3, *vaux;

  a = 15;
  b = 20;
  c = 25;

  int numeros[10] = {10,20,30,40,50,60,70,80,90,100};

  pt1 = &a;
  pt2 = &b;
  pt3 = &c;
  
  cout << "Endereco de memoria da variavel a: " << pt1 << endl;
  cout << "Endereco de memoria de pt1: " << &pt1 << endl;
  cout << "Conteudo do pt1: " << *pt1 << endl;

  vaux = &numeros[0];
  cout << "Conteudo do vaux: " << *vaux << endl;

  for(int i = 0; i <= 9; i = i + 2){
      *vaux = *vaux + 10;
      vaux = vaux + 2;
      cout << numeros[i] << endl;
  }
  
}