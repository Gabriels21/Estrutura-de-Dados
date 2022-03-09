#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
   int n[8], aux, num;
  
   for(int i = 0; i <= 7; i++){
      
   cout << "Digite um numero: ";
   cin >> num;
   n[i] = num;
     
   }

   for(int i = 0; i < 1; i++){
    for(int j = i + 1; j < 7; j++){
     if(n[i] > n[j]){
         aux = n[j];
         n[j] = n[i];
         n[i] = aux;
     }
   }
   }

   for(int j = 0; j <= 7; j++){
       cout << "Vetor ordenado: " << n[j] << endl;
   }
  
}