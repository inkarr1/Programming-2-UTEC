#include <iostream>
using namespace std;

int main() {
    int n_1, n_2;
    double result;
    cout << "Ingrese el primer numero entero: ";
    cin >> n_1;
    cout << "Ingrese el segundo numero entero: ";
    cin >> n_2;

    if(n_1 % 2 == 0) {
        cout << n_1 << " es par"<<endl;
    }else {
        cout << n_1 << " es impar"<<endl;
    }
    if(n_2 % 2 == 0) {
        cout << n_2 << " es par"<<endl;
    }else {
        cout << n_2 << " es impar"<<endl;
    }

    if (n_2 != 0) {
        result = double(n_1)/n_2;
        cout << result;
    }else {
        cout << "El cociente no está definido porque el divisor es 0.";
    }

    return 0;
}
