#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
   int m[3][5];
   int Soma_Linha[3];

   for(int l = 0; l <= 2; l++){
     Soma_Linha[l] = 0;
      for(int c = 0; c <= 4; c++){
   cout << "Digite um numero: ";
   cin >> m[l][c];
   Soma_Linha[l] += m[l][c];
      }
   }

   cout << endl;

   for(int l = 0; l <= 2; l++){
      for(int c = 0; c <= 4; c++){
   cout << m[l][c] << "\t";
      }
    cout << endl;
   }

  cout << endl;

  for(int l = 0; l <= 2; l++){
        cout << Soma_Linha[l] << endl;;
   }
  
  
}