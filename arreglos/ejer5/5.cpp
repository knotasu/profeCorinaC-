#include <iostream>
using namespace std;
int main(){
  int valores[12],sumar=0,perro;
  float pocerntaje;

  for(perro=0;perro<12;perro++){
    cout<<"posicion ("<<perro<<"):";
    cin>>valores[perro];
  }
 
  for(perro=0;perro<12;perro++){
    sumar+=valores[perro];
  }
  pocerntaje = sumar * 0.25;
  cout<<"el 25% de "<<sumar<<" es:"<<pocerntaje<<"\n";
  return 0;
}
