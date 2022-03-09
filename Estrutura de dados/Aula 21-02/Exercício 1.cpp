#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
   int i = 0;
   int n[10];
   int v = 1;


   while(v > 0 && i < 10){
      
   cout << "Digite um numero: ";
   cin >> v;
   n[i] = v;
   i = i + 1;
     
   }

   for(int j = 0; j < i; j++){
   if(n[j] > 0){
   cout <<"Numero inverso: " << n[j] * (-1) << endl;
   }
   }
  
}