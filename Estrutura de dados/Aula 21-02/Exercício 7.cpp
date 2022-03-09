#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
   int v[7], v2[7], v3[7], v4[7];

   for(int i = 0; i <= 6; i++){
      
   cout << "Digite dois numeros: ";
   cin >> v[i];
   cin >> v2[i];

   cout << "Escolha a operação matematica: \n 1- Adicao \n 2- Subtracao \n 3- Multiplicacao \n 4- Divisao" << endl;
   cin >> v3[i];

   switch(v3[i]){
  
     case 1:

     v4[i] =  v[i] + v2[i];

     break;
 
     case 2:

     v4[i] = v[i] - v2[i];

     break;

     case 3:

     v4[i] = v[i] * v2[i];

     break;

     case 4:

     v4[i] = v[i] / v2[i];

     break;
     
   }
     
  }

   cout << endl;
  
   for(int j = 0; j <= 6; j++){

   cout << "Resultado: " << endl;
   cout << v4[j] << endl;
   cout << "Operação: " << endl;
   cout << v3[j] << endl;

   cout << endl;
     
   }
  
}