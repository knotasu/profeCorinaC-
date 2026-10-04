#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
  srand(time(0));
  int valor1[10];
  int valor2[10],perro;
  int suma[10]={0};
  
  for (perro=0;perro<10;perro++) {
   int tengoFlojeraDeEscribirLosNumerosJaJaJa= rand() % 1000;
   valor1[perro]=tengoFlojeraDeEscribirLosNumerosJaJaJa;
   valor2[perro]=tengoFlojeraDeEscribirLosNumerosJaJaJa;
   
    suma[perro] = valor1[perro]+valor2[perro];
  }
  /*for (perro=0;perro<10;perro++) {
    suma[perro] = valor1[perro]+valor2[perro];
  }*/
  cout<<"AQUI ESTAN LAS SUMAS PROFES JIJIJI\n";
  for (int ver: suma) {
    cout<<ver<<" ";
  }
  cout<<"\n";
  
  return 0;
}
