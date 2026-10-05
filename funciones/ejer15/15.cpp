#include <iostream>
using namespace std;
void validador();
int main() {
  validador();
  return 0;
}
void validador() {
  int valor;
  cout<<"ingrese un valor menor que 100 para que se repita:";
  cin>>valor;

  while (valor < 100) {
    cout<<"ingrese nuevamente, se detiene ingresando un numero mayor que 100 o 100:";
    cin>>valor;
  }
}
