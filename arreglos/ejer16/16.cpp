#include <iostream>
using namespace std;
int main(){
  int notas[12],perro;
  cout<<"ingresa as notas\n";
  for (perro=0;perro<12;perro++) {
    cout<<"nota ("<<perro+1<<"):";
    cin>>notas[perro];
    while (notas[perro] < 0 || notas[perro] > 20) {
      cout<<"el rango de las notas a ingresar es del 1 al 20\n";
       cout<<"nota ("<<perro+1<<"):";
       cin>>notas[perro];
    }
  }
  int notaMayor=0;
  for (perro=0;perro<12;perro++) {
    if (notas[perro] > notaMayor) {
      notaMayor = notas[perro];
    }
 } 
  for (perro=0;perro<12;perro++) {
    if (notas[perro] == notaMayor) {
      cout<<"la nota mayor es de "<<notas[perro]<<" esta en la posicion "<<perro<<"\n";
    }
  }
   return 0;
}
