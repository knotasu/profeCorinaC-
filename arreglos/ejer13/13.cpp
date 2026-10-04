#include <iostream>
using namespace std;
int main() {
  float precios[12],suma=0;
  int perro;
  cout<<"ingrese las ventas de cada mes\n";
  for (perro=0;perro<12;perro++) {
    cout<<"mes ("<<perro+1<<"):";
    cin>>precios[perro];
    suma+=precios[perro];
  }  
  /*
   a) Si el total esta entre $120,000 y $150,000 paga un 25%
b) si el total esta entre $150,001 y $250,000 paga un 27%
c) Si el total es mayor de $250,000 paga un 29%
    */
  float impuesto;
  int porcentage;
    if (suma >= 120000 && suma <= 150000) {
      impuesto =  suma * 0.25;
      porcentage=25;
    } else if (suma > 150000 && suma <= 250000) {
     impuesto =  suma * 0.27;
     porcentage=27;
    } else if (suma > 250000) {
      impuesto = suma * 0.29;
      porcentage=29;
    } else {
      impuesto=0;
    }
cout<<"tus ventas al año son de: $"<<suma<<"\n";
if (impuesto > 0) {
cout<<"tus impuesto es de un "<<porcentage<<"% debes pagar: "<<impuesto<<"\n";
} else {
  cout<<"no debes pagar impuestos bro por que no vendiste nada we jajaja\n";
}
  return 0;
}
