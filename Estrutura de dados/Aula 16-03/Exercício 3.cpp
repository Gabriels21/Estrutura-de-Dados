#include <iostream>
#include <math.h>

using namespace std;

int verificador (int a){
    int cont  = 0;
   for(int i = 1; i <= a; i++){
    if(a % i == 0){
        cont = cont + 1;
    }

   }

   if(cont <= 2 && a > 1){
       return 1;
   }

   else{
       return 0;
   }
    
}

int main() {
  
 int n; 
 cout << "Digite um numero: ";
 cin >> n;

cout << endl;

cout << verificador(n) << endl;
  
}