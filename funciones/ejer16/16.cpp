#include <iostream>
using namespace std;
void ingresePrimo();
bool valide(int);
int main() {
  ingresePrimo();
  return 0;
}

void ingresePrimo() {
  int valor;
  cout<<"ingrese un valor para validar si es o no primo:";
  cin>>valor;
 bool bandera = valide(valor);
 if (bandera) {
   cout<<"el valor: "<<valor<<" es primo\n";
 } else {
   cout<<"el valor: "<<valor<<" no es primo\n";
 }
}
bool valide(int valor) {
  bool bandera = true;
  int inicial=1;
  for (int a = 2; a < valor; a++) {
    if (valor % a == 0) {
      bandera = false;
      return bandera;;
    }
  }
 return bandera;
}
