#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    do {
        cout << "Numero >0:";
        cin >> number;
    }while (number <= 0);
    string str_number = to_string(number);
    int length_number = str_number.size();
    int digit;
    for (int i = 0; i < length_number; i++) {
        digit = str_number[i] - '0';

        if (digit == 0) {
            cout << " ";
        } else {
            for (int j = 0; j < digit; j++) {
                cout << "|";
            }
        }

        if (i < length_number - 1) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
