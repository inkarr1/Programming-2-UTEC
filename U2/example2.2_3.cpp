#include<iostream>
using namespace std;

int main(){
    int numero=0, numero_original=0,contador=1;
    numero_original=rand();
    while (contador<=3) {
        cout<<"Intento "<<contador<<": Adivina un numero entre 1 y 10: "<<endl;
        cin>>numero;
        if (numero == numero_original) {
            cout << "¡ADIVINASTE!"<<endl;
        break;
        }
        else
            cout<<"No adivinaste :("<<endl;
        contador++;
    }
    cout<<"El numero era "<<numero_original<<endl;
}