#include <iostream>
#include <math.h>

using namespace std;

class Comparavel{

    int a;

    public:

    Comparavel(int a){
      this -> a = a;
    }

    Comparavel(){
      a = 40;
    } 

   bool MaiorOuIgual(int n){
     if(n >= a){
         return true;
     } else{
         return false;
     }
   }


   bool MenorOuIgual(int n){
    if(n <= a){
         return true;
     } else{
         return false;
     }
   }


 bool DiferenteDe(int n){
    if(n != a){
         return true;
     } else{
         return false;
     }
 }

};


int main() {

  int op,n;

  cout << "Digite um numero: ";
  cin >> n;

  cout << "Escolha uma das opcoes 1-Saber se e maior ou igual \n 2-Saber se e menor ou igual \n 3-Saber se e diferente";
  cin >> op;

  Comparavel obj;

  switch(op){
      case 1:
       cout << obj.MaiorOuIgual(n);
       break;

      case 2:
       cout << obj.MenorOuIgual(n);
       break;


      case 3:
       cout << obj.DiferenteDe(n);
       break;
  }
  
}