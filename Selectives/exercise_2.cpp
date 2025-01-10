#include <iostream>
using namespace std;
int main()
{ int numero=0;

    cout <<"Numero :";
    cin>>numero;
    switch(numero)
    {
        case 1: cout<<"Otoño\n";
        break;
        case 2: cout<<"Invierno\n";
        break;
        case 3: cout<<"Primavera\n";
        break;
        case 4: cout<<"Verano\n";
        break;
        default:
            cout << "No corresponde a una estación";
    }
    return 0;
}

