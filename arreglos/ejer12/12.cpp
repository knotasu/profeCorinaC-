#include <iostream>
using namespace std;
int main() {
  int valores[7],perro;
  for (perro=0;perro<7;perro++){
    cout<<"posicion ("<<perro<<"):";
    cin>>valores[perro];
  }
  int suma=0;
  for (perro=0;perro<7;perro++) {
   suma+=valores[perro];
  }
 float promedio = static_cast<float>(suma) / 7;

 int promedioEntero=static_cast<int>(promedio);

 if (promedio == promedioEntero) {
   if (promedioEntero % 2 == 0) {
     cout<<"la suma es: "<<suma<<" el promedio es: "<<promedioEntero<<" es par\n";
   } else {
     cout<<"la suma es: "<<suma<<" el promedio es: "<<promedioEntero<<" es impar\n";
   }
 } else {
   cout<<"el promedio dio "<<promedio<<" y como dio un valor en su parte decimal no es par ni imparjajajaja\n";
 }
 
  return 0;
}
