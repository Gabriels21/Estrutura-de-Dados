#include <iostream>
#include <math.h>

using namespace std;

float mult (float a, float b){
   float r = a * b;

   return r;
}

float adicao (float a, float b){
   float r = a + b;

   return r;

}

float div (float a, float b){
   float r = a / b;

   return r;
}

float sub (float a, float b){
   float r = a - b;

   return r;
}

int main() {
  
 int op;
 float n, n2; 

 cout << "Digite dois numeros: "; 
 cout << endl;
 cin >> n;
 cin >> n2;

 cout << "Escolha uma das operações: \n 1- Multiplicacao \n 2- Adicao \n 3- Divisao \n 4- Subtracao"
 cout << endl;
 cin >> op;

switch (op){

case 1:

cout << mult(n,n2);

break;

case 2:

cout << adicao(n,n2);

break;

case 3:

cout << div(n,n2);

break;


case 4:

cout << sub(n,n2);

break;

}
  
}