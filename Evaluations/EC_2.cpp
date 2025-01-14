#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    srand(static_cast<unsigned>(time(nullptr)));
    int min = 100000;
    int max = 999999;
    int days, n_random, n_polices, n_patrols, n_ambulances;
    cout<<"Numero de dias:";
    cin>>days;
    for (int i = 1; i <= days; i++) {
        n_random = rand() % ((max + 1) - min) + min;
        n_polices = (n_random % 10) + (n_random / min) % 10;
        n_patrols  = (n_random / 10) % 10 + (n_random / 10000) % 10;
        n_ambulances = (n_random/100) %10 + (n_random/ 1000) % 10;

        cout<<i<<". "<<n_random<<" Policias: "<<n_polices<<" Patrulleros: "<<n_patrols<<" Ambulancias: "<<n_ambulances<<endl;
    }
    return 0;
}