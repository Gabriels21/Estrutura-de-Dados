#include <iostream>
#include <math.h>

using namespace std;

int fatorial (int a){
    int m = 1;

    for(int i = 1; i <= a; i++){
        m = m * i;
    }

    return m;
}

int main() {
  
 int n; 
 cout << "Digite um numero: ";
 cin >> n;

 
cout << endl;

cout << "O fatorial de " << n << " é igual a " << fatorial(n) << endl;

  
}