#include <iostream>
using namespace std;
int main(){
  int valores1[18],valores2[18],producto[18],perro;
  cout<<"valores del vector 1\n";
  for (perro=0;perro<18;perro++){
    cout<<"posicion ("<<perro<<"):";
    cin>>valores1[perro];
  }
  cout<<"valores del vector 2\n";
  for (perro=0;perro<18;perro++){
    cout<<"posicion ("<<perro<<"):";
    cin>>valores2[perro];
  }
  for(perro=0;perro<18;perro++){
    producto[perro]=valores1[perro]*valores2[perro];
    cout<<producto[perro]<<",";
  }
  cout<<"\n";

  return 0;
}
