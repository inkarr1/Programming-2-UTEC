#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x1 = 0, y1=0, x2=0, y2=0, pmx=0,pmy=0;
    double distancia=0;
    cout<<"Ingrese las coordenadas del primer punto: "<<endl;
    cout<<"X1:"; cin>>x1;
    cout<<"Y1:"; cin>>y1;
    cout<<"Ingrese las coordenadas del segundo punto: "<<endl;
    cout<<"X2:"; cin>>x2;
    cout<<"Y2:"; cin>>y2;

    distancia = sqrt(pow(x2-x1 ,2) + pow(y2-y1 ,2));
    pmx = (x1+x2)/2;
    pmy = (y1+y2)/2;

    cout<<"La distancia entre los puntos ("<<x1<<", "<<x2<<") y ("<<y1<<", "<<y2<<") es: "<<distancia<<endl;
    cout<<"El punto medio es ("<<pmx<<", "<<pmy<<")"<<endl;
}
