#include <iostream>
#include <math.h>

using namespace std;

void ordenacao (int n[]){
     int aux;

   for(int i = 0; i < 5; i++){
    for(int j = i + 1; j < 5; j++){
     if(n[i] > n[j]){
         aux = n[i];
         n[i] = n[j];
         n[j] = aux;
     }
   }
   }

   for(int i = 0; i < 5; i++){
       cout << n[i] << endl;
   }
}

int busca_binaria (int n[], int item){

int inicio = 0;
int fim = 5 - 1;

while(inicio <= fim){

  int i = (inicio + fim) / 2;

  if(n[i] == item) {
    return i;
  }

  if(n[i] <= item) {
    inicio = i + 1;
 } else{
    fim = i;
 }
  }
 return -1;
    
}

int main() {
  
  int n[5];
  int busca;

  for(int i = 0; i < 5; i++){
      cout << "Digite um numero: " << endl;
      cin >> n[i];
  }

  cout << endl;

  ordenacao(n);
  cout << "Digite um número para ser buscado no vetor: ";
  cin >> busca;
  cout << "O numero que voce buscou esta na posicao " << busca_binaria(n,busca) << " do vetor";
  
}