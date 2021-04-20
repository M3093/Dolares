#include <iostream>
using namespace std;
float dolares, colones, conversion; 
int main() {
 cout<<"Ingrese el tipo de cambio del dolar "<<endl;
    cin>>colones;
    cout<<"Ingrese la cantidad de dolares"<<endl;
    cin>>dolares;
    conversion=(dolares*colones);
    cout<<"El monto de dolares a colones es  :"<<conversion<<endl;
    return 0;
} 