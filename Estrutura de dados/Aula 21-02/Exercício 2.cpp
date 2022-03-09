#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
   int i = 0;
   int n[100];
   int v = 1;
   int u = 0;
   int r = 0;


   while(v != 0){
      
   cout << "Digite um numero: ";
     
   cin >> v;
   n[i] = v;

   if(n[i] != 0){
     u = n[i];
   }
     
   i = i + 1;
     
   }

   for(int j = 0; j < i; j++){

   if(n[j] == u){
     r = r + 1;
   }
   
   }

   cout <<"Ultimo numero: " << u << endl;
   cout <<"O ultimo numero se repetiu: " << (r - 1) << " vezes" << endl;
  
}