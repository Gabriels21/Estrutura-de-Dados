#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
   int n[5];
   int par = 0, maior, menor, total = 0, tp;
   double media;

   for(int i = 0; i <= 4; i++){
      
   cout << "Digite um numero: ";
   cin >> n[i];
     
   if(n[i] > maior){
      maior = n[i];
  }

  if(n[i] < menor){
     menor = n[i];
  }

   if(n[i] % 2 == 0){
    par = par + 1;

   total = total + n[i];
     
  }

   }
   
   for(int i = 0; i <= 4; i++){
      
   cout << n[i] << endl;

   cout << endl;
   }

   media = total / 5;
  
   tp = (par * 100) / 5; 

   cout << "Maior: " << maior << endl;

   cout << endl;
     
   cout << "Menor: " << menor << endl;

   cout << endl;
     
   cout << "Media: " << media << endl;

   cout << endl;
     
   cout << "Porcentagem de números pares: " << tp << "%" << endl;
  
  
}