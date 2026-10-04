#include <iostream>
using namespace std;
int main () {
  int valores[5],perro;
  for (perro=0;perro<5;perro++) {
    cout<<"valor ("<<perro<<"):";
    cin>>valores[perro];
  }
  int suma=0;
  for (perro=4;perro>-1; perro--) {
    cout<<valores[perro]<<" ";
    suma+=valores[perro];
  }
  cout<<"\n";
  float promedio = static_cast<float>(suma) / 5;
  cout<<"el promedio es "<<promedio<<" y es menor que los valores:\n";
  for (perro=0;perro<5;perro++) {
    if (promedio < valores[perro]) {
      cout<<valores[perro]<<" en la posicion ("<<perro<<")\n";
    }
  }
  return 0;
}
