#include <iomanip>
#include <cstring>
#include <iostream>
using namespace std;
void ingresarDatos();
int datosLetraChar(char);
int main() {
  ingresarDatos();
  return 0;
}
void ingresarDatos() {
  char datos[5];//datos que se ingresan
  float sueldo[5];//datos que se ingresan

  char puesto[20];//esto se calcula al momento segun su clave
  cout << "ingrese los datos de los 5 empleados\n";
  cout << left;
  for (int a = 0; a < 5; a++) {
    cout << "ingrese la clave del puesto del empleado n(" << a + 1 << ")\n";
    cout << setw(8) << "\"S\"" << "Sindicalizado (20%)\n";
    cout << setw(8) << "\"C\"" << "Confianza     (10%)\n";
    cout << setw(8) << "\"D\"" << "Directivo     (05%)\n";
    cout << setw(8) << "\"E\"" << "Ejecutivo     (00%)\n";
    cout << "ingrese:";
    cin >> datos[a];

    cout << "ingrese el salario del empleado n(" << a + 1 << "):";
    cin >> sueldo[a];
    cout<<"\n\n";
  }
  cout<<left;
     cout<<setw(17)<<"N Empleado"<<setw(9)<<"Cargo"<<setw(12)<<"Aumento %"<<setw(16)<<"Sueldo Viejo"<<"Nuevo Sueldo\n";
    for (int a = 0; a < 5; a++) {
    int aumentoPor = datosLetraChar(datos[a]);
    if (datos[a] == 's' || datos[a] == 'S') strcpy(puesto,"Sindicalizado");
    else if (datos[a] == 'c' || datos[a] == 'C') strcpy(puesto,"Confianza");
    else if (datos[a] == 'd' || datos[a] == 'D') strcpy(puesto,"Directivo");
    else if (datos[a] == 'e' || datos[a] == 'E') strcpy(puesto,"Ejecutivo");
    float porcentajeAumento = sueldo[a] * (aumentoPor / 100.0);
    float totalDeAumento = sueldo[a] + porcentajeAumento;
    cout<<setw(4)<<" "<<setw(11)<<a+1<<setw(16)<<puesto<<setw(12)<<aumentoPor<<"$"<<setw(15)<<sueldo[a]<<"$"<<totalDeAumento<<"\n";
  }
}
int datosLetraChar(char datos) {
  int por;
    if (datos == 's' || datos == 'S') por = 20;
    else if (datos == 'c' || datos == 'C') por = 10;
    else if (datos == 'd' || datos == 'D') por = 5;
    else if (datos == 'e' || datos == 'E') por = 0;
    return por;
}
