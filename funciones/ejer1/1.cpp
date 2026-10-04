#include <iostream>
using namespace std;
void enviar();
void parcioales(float notas[5][4]);
int main(){
  enviar();
 return 0; 
}
/*
 * 1er Parcial: 30%
* 2do Parcial: 25%
* 3er Parcial: 20%
* 4to Parcial: 25%
 * */

void enviar() {
  float nota[5][4];
  for (int a=0;a<5;a++) {
    cout<<"ingresar notas del alumno "<<a+1<<"\n";    
    for (int b=0;b<4;b++) {
    cout<<"parcial "<<b+1<<":";
    cin>>nota[a][b];
    }
 }
  parcioales(nota);
}

void parcioales(float notas[5][4]) {
  float alumnos[5]={0};
  for (int a = 0;a<5;a++) {
   for (int b = 0; b < 4; b++) {
     if (b == 0) {
       notas[a][b] *= 0.30;
     } else if (b == 1) {
       notas[a][b] *= 0.25;
     } else if (b == 2) {
       notas[a][b] *= 0.20;
     } else if (b == 3) {
       notas[a][b] *= 0.25;
     }
     alumnos[a] += notas[a][b];
   } 
 }
  for (int a =0;a<5;a++) {
    cout<<"alumno "<<a+1<<" saco: "<<alumnos[a]<<"\n";
  }
}
