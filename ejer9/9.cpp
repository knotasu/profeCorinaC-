#include <iostream>
using namespace std;
int main(){
  int valores[5],perro;
  for (perro=0;perro<5;perro++){
    cout<<"posicion ("<<perro<<"):";
    cin>>valores[perro];
  }
  for(perro=0;perro<5;perro++){
    valores[perro]*=2;
    cout<<valores[perro]<<",";
  }
  cout<<"\n";
  return 0;
}
