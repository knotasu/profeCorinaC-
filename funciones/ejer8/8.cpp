#include <iostream>
using namespace std;
void ingresoDatos();
void mostrar(int);
int main(){
  ingresoDatos();
  return 0;
}
void ingresoDatos() {
  int n;
  cout<<"ingrese hasta que valor quiere calcular:";
  cin>>n;
  mostrar(n);
}
void mostrar(int n) {
  for (int a = 1; a <= n; a++) {
    if (a % 2 == 0) {
      cout<<a<<" ";
    }
  }
  cout<<"\n";
}
