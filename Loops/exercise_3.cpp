#include <iostream>
using namespace std;

int main() {
    int n;
    do {
        cout << "Enter a number: ";
        cin >> n;
    }while (n <= 99);
    string s = to_string(n);
    int t = s.size();

    int counterp = 0, counteri = 0;
    for (int i = 0; i < t; i++) {
        if (int(s[i]) % 2 == 0) counterp++;
        if (int(s[i]) % 2 != 0) counteri++;
    }
    cout << "Cantidad de digitos: " << t << endl;
    cout << "Cantidad de pares: " << counterp << endl;
    cout << "Cantidad de impares: " << counteri << endl;
    return 0;
}