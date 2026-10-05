#include <iostream>
using namespace std;
void ingresarDatos();
void mostrarNimpares(int);
int main() {
  ingresarDatos();
}
void ingresarDatos() {
  int n;
  cout<<"ingrese la cantidad de n numeros:";
  cin>>n;
  mostrarNimpares(n);
}
void mostrarNimpares(int n) {
  int contador = 1;
  int numerosDeLaLista=1;
  while (contador <= n) {
    if (numerosDeLaLista % 2 == 1) {
      cout<<numerosDeLaLista<<" ";
      contador++;
    }
   numerosDeLaLista++;
  }
  cout<<"\n";
}
