#include <iostream>
#include <math.h>

using namespace std;

void numeros(int *a, int *b){
    int aux;

    if(*a > *b){
     aux = *a;
     *a = *b;
     *b = aux;
    }

    for(int i = *a; i <= *b; i++){
        if(i % 2 != 0){
            cout << endl << i;
        }
    }
}

int main() {

  int a, b, *n1, *n2;

  cout<< "Digite o primeiro numero: " << endl;
  cin >> a;

  cout<< "Digite o segundo numero: " << endl;
  cin >> b;

  n1 = &a;
  n2 = &b;
  numeros(n1,n2);

  cout << endl;
  
}