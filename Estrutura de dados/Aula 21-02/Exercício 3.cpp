#include <iostream>
#include <math.h>

using namespace std;

int main() {
  
    int n[10], nv = 0;

    for(int i = 0; i <= 9; i++){

    cout << "Digite um numero: ";
    cin >> n[i];

    while(nv == n[i]){
    cout << "Esse numero ja foi digitado, por favor digite outro numero: ";
    cin >> n[i]; 
    }

    nv = n[i];
      
    }

    for(int j = 0; j <= 9; j++){

    cout << n[j] << endl;
      
    }
}