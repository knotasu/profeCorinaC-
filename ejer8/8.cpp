#include <iostream>
using namespace std;
int main(){
  int valores[10],perro;
  for (perro=0;perro<10;perro++){
    cout<<"posicion ("<<perro<<"):";
    cin>>valores[perro];
  }
  for(perro=0;perro<10;perro++){
    cout<<valores[perro]<<",";
  }
  cout<<"\n";
  return 0;
}
