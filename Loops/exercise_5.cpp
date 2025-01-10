#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n;
  do{
    cout << "Numero de vertices: ";
    cin >> n;
  }while(n<3 || n>10);
  int x1, y1, xn, yn, xm, ym;
  int d = 0;
  for(int i=1;i<=n;i++){
    cout<<"Vertices num "<<i<<endl;
    cout<<"x= ";
    cin >> xn;
    cout<<"y= ";
    cin >> yn;
    if (i == 1) {
      x1 = xn;
      y1 = yn;
    }
    if(i>1){
      d = d + sqrt(pow(xn-xm,2) + pow(yn-ym,2));
    }
    xm = xn;
    ym = yn;
  }
  d = d + sqrt(pow(x1-xn,2) + pow(y1-yn,2));
  string poligono;
  switch (n) {
    case 3:
      poligono = "Triangulo";
      break;
    case 4:
      poligono = "Cuadrilatero";
      break;
    case 5:
      poligono = "Pentagono";
      break;
    case 6:
      poligono = "Hexagono";
      break;
    case 7:
      poligono = "Heptagono";
      break;
    case 8:
      poligono = "Octagono";
      break;
    case 9:
      poligono = "Nonagono";
      break;
    case 10:
      poligono = "Decagono";
      break;
  }
  cout << "Es un " << poligono << endl;
  cout<<"Su perimetro es: "<<d<<endl;
  return 0;
}