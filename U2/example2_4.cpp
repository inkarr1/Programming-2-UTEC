#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;

int main() {
 string color;
 int numero;
 char letra;
 cout << "Primera coordenada (letra en mayuscula)"; cin >> letra;
 cout << "Segunda coordenada (entero entre 1 y 8)"; cin >> numero;

 if(letra == 'A' || letra == 'C' || letra == 'G') {
     if(numero%2!=0) color='negro';
     else color ='blanco';
 else
     if(numero%2==0) color=''
 }
}
