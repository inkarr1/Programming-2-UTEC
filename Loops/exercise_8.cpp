#include <iostream>
using namespace std;

int main(){
  int rows,cols;
  do{
    cout << "Filas [mayor a 2]: ";
    cin >> rows;
  }while(rows <=2);

  do{
    cout << "Columnas [mayor a 4]: ";
    cin >> cols;
  }while(cols<=4);

  for(int i=1;i<=rows;i++){
    for(int j=1;j<=cols;j++){
      if (i==1 || i==rows || j==1 || j==cols) {
        cout << "*";
      }else {
        cout << "o";
      }
    }
    cout<<endl;
  }
  return 0;
}