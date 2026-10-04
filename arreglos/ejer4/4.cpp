#include <iostream>
using namespace std;
int main(){
  int valores[8],sumar=0,perro;
  float promedio;

  for(perro=0;perro<8;perro++){
    cout<<"posicion ("<<perro<<"):";
    cin>>valores[perro];
  }
 
  for(perro=0;perro<8;perro++){
    sumar+=valores[perro];
  }
  promedio = sumar / 8.0;
  cout<<"el promedio es:"<<promedio<<"\n";
  return 0;
}
