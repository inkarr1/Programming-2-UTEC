#include <iostream>
using namespace std;

int main() {
    int n, c = 0, p = 0, i = 0;
    cout << "Ingrese un numero entero: ";
    cin >> n;
    while (n != 0) {
        c++;
        if (n%2==0) {
            p++;
        }else {
            i++;
        }
        cout << "Ingrese un numero entero: ";
        cin >> n;
    }
    cout << "Cantidad total de los números leídos: " << c << endl;
    cout << "Cantidad de números pares leídos: " << p << endl;
    cout << "Cantidad de números impares leídos: " << i << endl;
    return 0;
}