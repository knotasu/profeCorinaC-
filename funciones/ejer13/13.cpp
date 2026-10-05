#include <iostream>
using namespace std;
void ingresarValores();
void tabla(int);
int main() {
  ingresarValores();
  return 0;
}
void ingresarValores() {
  int valor;
  cout<<"que tabla de multiplicar quieres: ";
  cin>>valor;
  tabla(valor);
}
void tabla(int valor) {
  for (int a = 1; a <= 10; a++) {
    int mul = valor * a;
    cout<<valor<<" x "<<a<<" = "<<mul<<"\n";
  }
}
