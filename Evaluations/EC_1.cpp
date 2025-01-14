#include <iostream>
using namespace std;

int main() {
    int number;
    while(number <= 0 || number >= 10){
        cout << "Numero:";
        cin >> number;
    }
    for (int itr_n = 1; itr_n <= number; itr_n++) {
        for (int rows = number - itr_n + 1; rows >= 1; rows--) {
            for (int columns = 0; columns < rows; columns++) {
                cout << rows;
            }
            cout << "\n";
        }
        if (itr_n < number) {
            cout << "\n";
        }
    }
    return 0;
}
