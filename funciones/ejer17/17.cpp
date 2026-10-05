#include <iostream>
using namespace std;
void ingresar();
double promedioDeNumeros(int cuantos[100],int cantidad);
int main() {
  ingresar();
  return 0;
}

void ingresar() {
  int cuantos[100],cantidad;
  cout<<"cuantos valores va a ingresar:";
  cin>>cantidad;
  for (int a = 0; a < cantidad; a++) {
    cout<<"valor de la pos ("<<a<<"):";
    cin>>cuantos[a];
  }
 double promedio =  promedioDeNumeros(cuantos,cantidad);
 cout<<"el promedio es: "<<promedio<<"\n";
}

double promedioDeNumeros(int cuantos[100],int cantidad) {
  int suma =0;
  for (int a = 0; a < cantidad; a++) {
    suma+=cuantos[a];
 }
  double promedio = static_cast<double>(suma) / cantidad;
  return promedio;
}
//este es el ultimo profe gracias por revisar mis codigos jiijiji me gustaron los ejercicios
