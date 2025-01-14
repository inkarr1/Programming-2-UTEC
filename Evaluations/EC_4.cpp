#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int number;
    while(number <= 0 || number >= 10){
        cout << "Numero [1 - 10]:";
        cin >> number;
    }
    cout << setw(4) << "";
    for (int h = 10; h >= 1; h--) {
        cout << setw(4) << h;
    }
    cout << endl;

    for (int i = 10; i >= number; i--) {
        cout << setw(4) << i;
        for (int j = 10; j >= 1; j--) {
            cout << setw(4) << (i * j);
        }
        cout << endl;
    }

    return 0;
}
