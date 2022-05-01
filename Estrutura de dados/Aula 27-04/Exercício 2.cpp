#include <iostream>
#include <math.h>

using namespace std;

class Triangulo{

public: 

int a, b, c;

void entrada(){
    cout << "Digite os lados do triangulo: " << endl;
    cin >> a >> b >> c;
    cout << endl;
}

int verificar(){
    if(a + b > c && a + c > b && b + c > a){
     return 1;
    } else{
       return 0;
    }
}


int tipoTriangulo(){
  if(a == b && b == c){
      return 1;
    } 
    
    else if(a == b && b != c || a == c && a != b || b == c && b != a){
        return 2;
    }
      

     else if(a != b && a != c && b != c){
        return 3;
    }
}

};


int main() {

  Triangulo obj;
  obj.entrada();
  
  if(obj.verificar() == 1) {
     cout << "E um triangulo" << endl;
   }else {
     cout << "Nao e um triangulo" << endl;
   }

  
   if(obj.tipoTriangulo() == 1) {
     cout << "Equilatero";
   }
   else if(obj.tipoTriangulo() == 2) {
     cout << "Isoceles";
   }
  else if(obj.tipoTriangulo() == 3) {
     cout << "Escaleno";
   }
  
}