#include <iostream>
using namespace std;
int imparesTotales(int,int);
int main(){
  int inicio,fin;
  cout<<"ingrese el inicio de los valores:";
  cin>>inicio;
  cout<<"ingrese el fin de los valores:";
  cin>>fin;
  int suma = imparesTotales(inicio,fin);
  cout<<"la suma de los impares es:"<<suma<<"\n";
  return 0;
}
int imparesTotales(int inicio,int fin){
  int suma=0;
  for (int a = inicio; a <= fin; a++) {
    bool bandera = a % 2 == 1;
    if (bandera) {
      suma+=a;
    } else {
      bandera = false;
    } 
    
  }
  return suma;
}
