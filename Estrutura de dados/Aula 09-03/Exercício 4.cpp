#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
   int m[5][5];

   for(int l = 0; l <= 1; l++){
      for(int c = 0; c <= 1; c++){
   cout << "Digite um numero: ";
   cin >> m[l][c];
      }
   }

   cout << endl;

   for(int l = 0; l <= 1; l++){
      for(int c = 0; c <= 1; c++){
   cout << m[l][c] << "\t";
      }
    cout << endl;
   }

  for(int l = 0; l <= 1; l++){
    for(int c = 0; c <= 1; c++){
    if((l + c) % 2 != 0){
    cout << m[l][c] << "\t";
      }
    cout << endl;
   }
    }
  
}