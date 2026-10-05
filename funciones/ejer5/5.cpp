#include <iostream>
#include <cstring> //profe puse esta libreria para copiar los textos de aprobado y reprobaddo es que no se como hacerlo sin ella despues en la clase le pregunto
using namespace std;
void ingreseDatos();
void recibiendo(float notas[10], char aprobacion[10][10]);
int main(){
  ingreseDatos();
  return 0;
}
void ingreseDatos() {
  float notas[10];
  char aprobacion[10][10];
  int largo = sizeof(notas) / sizeof(notas[0]);
      //cout<<largo<<endl;
  cout<<"ingrese las notas de los 10 alumnos\n";
  for (int a = 0; a < largo; a++) {
    cout<<"alumno n("<<a+1<<"):";
    cin>>notas[a];
    if (notas[a] > 7) {
      strcpy(aprobacion[a], "aprobado");
    } else {
    strcpy(aprobacion[a], "reprobado");
  } 
}
  recibiendo(notas,aprobacion);
}

void recibiendo(float notas[10], char aprobacion[10][10]) {
  //int largo = sizeof(notas) / sizeof(notas[0]); 
  for (int a = 0; a < 10; a++) {//mejor voy a poner el 10 directamente
    cout<<"alumno n("<<a+1<<") tiene: "<<notas[a]<<" "<<aprobacion[a]<<"\n"; 
  }
}
