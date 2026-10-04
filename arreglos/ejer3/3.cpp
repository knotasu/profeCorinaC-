#include <iostream>
using namespace std;
int main(){
  int teVoyASumarJaJaJaJa[6]={7,4,5,1,9,7},teVoyAGuardarJaJaJa=0,p;

  for(p=0;p<6;p++){
    teVoyAGuardarJaJaJa+=teVoyASumarJaJaJaJa[p];
  }
  cout<<"la suma es:"<<teVoyAGuardarJaJaJa<<"\n";
  return 0;
  
}
