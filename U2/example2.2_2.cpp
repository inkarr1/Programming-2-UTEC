#include<iostream>
using namespace std;

int main(){
    int denominacion=0;
    cout<<"Ingreso la denominacion del billete norteamericano: "<<endl;
    cin>>denominacion;
    if( denominacion==500 or denominacion==1000 or denominacion==5000 or denominacion==10000)
        cout<<"Denominacion descontinuada"<<endl;
    else {
        switch (denominacion) {
            case 1:
                cout<<"George Washington"<<endl;break;
            case 2:
                cout<<"Thomas Jefferson"<<endl;break;
            case 5:
                cout<<"Abraham Lincoln"<<endl;break;
            case 10:
                cout<<"Alexander Hamilton"<<endl;break;
            case 20:
                cout<<"Andrew Jackson"<<endl;break;
            case 50:
                cout<<"Ulisses S. Grant"<<endl;break;
            case 100:
                cout<<"Benjamin Franklin"<<endl;break;
            default:
                cout<<"No existe denominacion"<<endl;break;
        }
    }
};
