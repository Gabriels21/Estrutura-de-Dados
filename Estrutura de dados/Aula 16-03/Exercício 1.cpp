#include <iostream>
#include <math.h>

using namespace std;

float celsius (float a){
    float  f = (a - 32) * 5/9;

    return f;
}

float fahrenheit (float b){
    float  c = (b * 9/5) + 32;

    return c;
}

int main() {
  
 float t; 
 cout << "Digite a temperatura em Fahrennheit: ";
 cin >> t;

 float t2; 
 cout << "Digite a temperatura em Celsius: ";
 cin >> t2;

cout << endl;

cout << t << " graus Fahrenheit é igual a " << celsius(t) << " graus Celsius" << endl;
cout << t2 << " graus Celisus é igual a " << fahrenheit(t2) << " graus Fahrenheit" << endl;
  
}