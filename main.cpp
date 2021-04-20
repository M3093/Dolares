#include <iostream>
using namespace std;
float dolares, colones, conversion; 
int main() {
 cout<<"Ingrese el tipo de cambio del dolar "<<endl;
    cin>>dolares;
    cout<<"Ingrese la cantidad de dolares"<<endl;
    cin>>colones;
    conversion=(dolares*colones);
    cout<<"El monto de dolares a colones es  :"<<conversion<<endl;
    return 0;
} 