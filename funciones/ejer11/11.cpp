#include <iostream>
using namespace std;
void ingresarDatos();
void enviando(int);
int main(){
  ingresarDatos();
  return 0;
}
void ingresarDatos() {
  int n;
  cout<<"ingrese un valor para determinar sus divisores: ";
  cin>>n;
  enviando(n);
}
void enviando(int n) {
  for (int a = 1; a <= n; a++) {
    if (n % a == 0) {
      cout<<a<<" ";
    }
  }
  cout<<"\n";
}
