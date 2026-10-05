#include <iostream>
using namespace std;
void ingresoDatos();
int recibiendoValores(int valores[100],int n);
int main() {
  ingresoDatos();
  return 0;
}
void ingresoDatos() {
  int n, valores[100]; 
  cout<<"ingrese la cantidad de valores:";
  cin>>n;
  int v;
  cout<<"ingrese los valores de cada posicion\n";
  for (int a = 0; a < n; a++) {
    cout<<"pos ("<<a<<"):";
    cin>>v;
    valores[a] = v;
  }
  int suma = recibiendoValores(valores,n);
  float promedio = static_cast<float>(suma) / n;
  cout<<"la usma es:"<<suma<<"\n";
  cout<<"el promedio es:"<<promedio<<"\n";
}
int recibiendoValores(int valores[100],int n) {
  int suma = 0; 
  for (int a = 0; a < n; a++) {
     suma  += valores[a];
   }
  return suma;
}

