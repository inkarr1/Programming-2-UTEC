#include <iostream>

using namespace std;

int main()
{
    int n=0, entero= 0, conteo=0,cpar=0, cimpar=0;
    cout<<"Ingrese un numero de 3 o mas digitos: "<<endl;
    cin>>n;

    while (n!=0) {
        int ntemp=n;
        n = n / 10;
        conteo++;

        if( ( ntemp % 10 ) % 2 == 0 ) cpar++;
        else cimpar++;
    }
    if (conteo < 3 )
        cout << "el numero tiene menos de 3 digitos" << endl;
    else {
        cout << "Cantidad de digitos: " << conteo << endl;
        cout << "Digitos pares: " << cpar << endl;
        cout << "Digitos impares: " << cimpar << endl;
    }

return 0;
}