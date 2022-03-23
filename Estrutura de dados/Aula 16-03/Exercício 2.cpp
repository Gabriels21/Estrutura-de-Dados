#include <iostream>
#include <math.h>

using namespace std;

int soma (int a, int b)
  return a + b;
}

int quad(int c){
  return c * c;
}

int somaq (int d, int e){
  return soma(quad(d), quad(e));
}

int main() {
  
 int n; 
 cout << "Digite um numero: ";
 cin >> n;

 int n2; 
 cout << "Digite outro numero: ";
 cin >> n2;

cout << somaq(n, n2) << endl;
  
}