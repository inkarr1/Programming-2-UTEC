#include<iostream>
#include<iomanip>
#include <cmath>
using namespace std;

int main() {
    double valordepi = 3;
    for (int i = 1; i < 60; i++) {
        valordepi += pow(-1, i + 1) * 4 / ((2 * i) * (2 * i + 1) * (2 * i + 2));
        cout << "Valor de Pi:" << fixed << setprecision(10) << valordepi << endl;
    }
}