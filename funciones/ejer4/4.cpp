#include <iostream>
using namespace std;
void ingresoDeDatos();
int facto(int);
int main(){
  ingresoDeDatos();
  return 0;
}
void ingresoDeDatos() {
  int factorial;
  cout<<"ingrese un valor para calcular su factorial: ";
  cin>>factorial;

  int valorObtenido = facto(factorial);
  cout<<"valor obtenido: "<<valorObtenido<<"\n";
}
int facto(int factorial) {
  int guardarValor=1;
  for (int a = 1; a <= factorial; a++) {
    guardarValor*=a;
  }
  return guardarValor;
}
