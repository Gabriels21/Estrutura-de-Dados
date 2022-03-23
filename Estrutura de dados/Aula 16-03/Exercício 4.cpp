#include <iostream>
#include <math.h>

using namespace std;

int verificador (int a){
   if(a % 4 == 0 && a % 100 != 0 || a % 400 == 0){
       return 1;
   }

   else{
       return 0;
   }
}

int main() {
  
 int ano; 
 cout << "Digite um ano: ";
 cin >> ano;

cout << verificador(ano) << endl;
  
}