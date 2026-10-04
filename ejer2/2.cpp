#include <iostream>
using namespace std;
int main(){
  int vecto[10],a;
  
  for (a=0;a<10;a++){
    cout<<"posicion ("<<a<<"):";
    cin>>vecto[a];
  }
  
    if(vecto[4] > 0) {
      cout<<"la quinta posicion es positiva\n";
    } 
    if (vecto[0]<0){
      cout<<"la primera posicion ea negativa\n";
    } 
    if (vecto[9]==0){
      cout<<"la ultima posicion es 0\n";
    }
  
  cout<<"\n";
  return 0;
}
