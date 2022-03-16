#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
   int m[4][4], soma = 0;

   for(int l = 0; l <= 3; l++){
      for(int c = 0; c <= 3; c++){
   cout << "Digite um numero: ";
   cin >> m[l][c];
   if(l > c){
       soma = soma + m[l][c];
   }
      }
   }
    cout << endl;

   for(int l = 0; l <= 3; l++){
      for(int c = 0; c <= 3; c++){
   cout << m[l][c] << "\t";
      }
    cout << endl;
   }

   cout << endl;

   cout << soma;
  
}