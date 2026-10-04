#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
  srand(time(0));

  int valores[20],perro,pares=0,impares=0;
  for (perro=0;perro<20;perro++){
    int a = rand() % 100;
    valores[perro]=a;
  }
  for(int perro2: valores) {
    cout<<perro2<<",";
  }
  for (int perro1: valores) {
    if (perro1 % 2 == 0){
      pares++;
    } else {
      impares++;
    }
  }
  cout<<"\ncantidad de pares: "<<pares<<"\n";
  cout<<"cantidad de impares: "<<impares<<"\n";
  return 0;
}
