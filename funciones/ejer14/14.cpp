#include <iostream>
using namespace  std;
void ingresar();
char seguirDetener(char);
int main() {
  ingresar();
 return 0;  
}



void ingresar() {
  
   char validar;
  do {
  cout<<"desea continuar S/N:";
  cin>>validar;
  while (validar == 's' || validar == 'S') {
    cout<<"sigue desea continuar S/N:";
    cin>>validar;
  }
  
  }while (validar != 'n' && validar != 'n');
}
  

