#include <iostream>
using namespace std;

int main() {
    int row;
    do {
        cout<<"Filas [1-9]:";
        cin>>row;
    }while(row<1||row>9);
    for(int i=1;i<=row;i++) {
        for(int j=1;j<=row;j++) {
            if(row - i >= j) {
                cout<<" ";
            }else {
                cout<<" * ";
            }
        }
        cout<<endl;
    }

    return 0;
}
