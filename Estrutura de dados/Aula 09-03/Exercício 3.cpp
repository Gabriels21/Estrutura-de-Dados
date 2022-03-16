#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
   int m[2][3], transposta[3][2];

   for(int l = 0; l <= 1; l++){
      for(int c = 0; c <= 2; c++){
   cout << "Digite um numero: ";
   cin >> m[l][c];
   transposta[c][l] = m[l][c]; 
      }
   }

   cout << endl;

   for(int l = 0; l <= 1; l++){
      for(int c = 0; c <= 2; c++){
   cout << m[l][c] << "\t";
      }
    cout << endl;
   }

  cout << endl;

  for(int l = 0; l <= 2; l++){
      for(int c = 0; c <= 1; c++){
   cout << transposta[l][c] << "\t";
      }
    cout << endl;
   }
  
  
}