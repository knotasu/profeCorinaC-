#include <iostream>
using namespace std;
bool esPrimo(int);
int main(){
  int inicio,fin;
  cout<<"ingrese el inicio de los numeros: ";
  cin>>inicio;
  cout<<"ingrese el final de los numeros:";
  cin>>fin;
 
  for (int a = inicio; a <= fin; a++){
    if (a <= 1) {
      continue;
    }
     bool primo = esPrimo(a);
      if (primo) {
      cout<<a<<" ";
    }
  }
  cout<<"\n";
  return 0;
}
bool esPrimo(int a) {
    bool primo = true;
    for (int b = 2; b < a; b++) {
      if (a % b == 0) {
        primo = false;
        break;
      }
    }
    if (primo) {
      return primo;
    } else {
    return primo;
  }
}
