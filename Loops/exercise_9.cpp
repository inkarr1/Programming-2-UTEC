#include <iostream>
using namespace std;

int main() {
    int n = 7; // Número total de líneas (debe ser impar)

    for (int i = 0; i < n; i++) {
        // Imprimir '~' al inicio de cada línea
        int tilde_count = (i < n / 2) ? (n / 2 - i) : (i - n / 2);
        for (int j = 0; j < tilde_count; j++) {
            cout << "~";
        }

        // Imprimir '#' o '&'
        int hash_count = (i < n / 2) ? (n / 2 - tilde_count + 1) : (n - i);
        for (int j = 0; j < hash_count; j++) {
            if (i < n / 2) {
                cout << "#";
            } else {
                cout << "&";
            }
        }

        // Imprimir '@'
        int at_count = n - tilde_count - hash_count;
        for (int j = 0; j < at_count; j++) {
            cout << "@";
        }

        cout << endl; // Nueva línea al final de cada fila
    }

    return 0;
}

