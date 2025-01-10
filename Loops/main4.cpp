#include <iostream>
using namespace std;

int main() {
    int min = 100000;
    int max = 999999;
    int n;
    for (int i = 1; i <= 6; i++) {
        n = (rand() % ((max + 1) - min)) + min;
        cout<<n<<endl;
    }
    return 0;
}