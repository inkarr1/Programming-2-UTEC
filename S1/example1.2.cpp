#include<iostream>
using namespace std;

int main(){
    int colores, De_24, De_12, De_6, c_sobran;
    cout<<"Numero de colores:";
    cin>> colores;
    De_24 = colores/24;
    colores = colores%24;
    De_12 = colores/12;
    colores = colores%12;
    De_6 = colores/6;
    c_sobran = colores%6;

    cout<<"Los colores se empaquetan en cajas de:"<<endl;
    cout<<De_24<<" cajas de 24 colores"<<endl;
    cout<<De_12<<" cajas de 12 colores"<<endl;
    cout<<De_6<<" cajas de 6 colores"<<endl;
    cout<<c_sobran<<" colores sobrarían"<<endl;
}