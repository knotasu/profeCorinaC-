#include <iostream>
using namespace std;
int main(){
  int valores[8],perro,menor=0,mayor=0;
  for(perro=0;perro<8;perro++){
    cout<<"posicion ("<<perro<<"):";
    cin>>valores[perro];
  }
  for(perro=0;perro<8;perro++){
    if(valores[perro]<1000) {
      menor++;
    } else if(valores[perro]>1000){
      mayor++;
    }
  }
  if (menor>0) {
    cout<<"cantidad menores que mil:"<<menor<<"\n";
  }
  if(mayor>0){
    cout<<"cantidad mayores que mil:"<<mayor<<"\n";
  }
}
