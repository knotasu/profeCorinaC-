#include <iostream>
using namespace std;

int main(){
  int vecto[10]={3,7,3,2,0,9,8,7,5,4};
  for (int leer = 0; leer < 10; leer++){
    if (leer < 9) {
      cout<<vecto[leer]<<",";
    } else {
      cout<<vecto[leer];
    }
  }
  cout<<"\n";
  return 0;
}
