#include <iostream>
using namespace std;
//al principio del codigo quise hacer solo para valores positivos en el esponente, pero me vi en la obligacion de cambiar eso, ya que matematicamente si ingresamos numeros negativos en una calculadora me dara como resultado la elevacion positiva mas la division de la misma ose 1/resultado de la postencia.
//tambien controle la base positiva y el exponente como un 0, ya que matematicamente todo valor como base elevado ala 0 dara como resultado = 1, ahora bien si la base en negativa ya la compuatadora hace la conversion para que de como resultado un valor positivo.
//pero haciendo un analisis profesora corina, pude determinar en una calculadora que los valores en base negativos y exponente par dara como resultado un valor positivo y si es impar dara negativo, interesante ¿no? jejeje es curioso como funciona las matematicas, en fin profe con esto que le quiero decir solamente quise llegar casi hacer lo mismo que una calculadora, la diferencia es la imprecion por que bota resultados de notaciones ejemplo 5^-6 en la terminal (en mi caso uno bash en la distro zorin oz basada en ubuntu) la terminal arroja 6.4e-5, segun los el libro de CconClases en la parte de notaciones dice que la "e" es de exponente y tiene por valor definido un 10 asi que en el momento de su revision del codigo de este enunciado se multiplicaria 6.4 * (10^-5) para que me bote el mismo resultado que en la calculara (claro haciendolo en la calculadora no en la terminal ni en otro cpp u otro lenguaje) gracias por su tiempo profesora corina, solo era un detalle que queria abarcar por que me parecio muy interesante este tema.
void ingresarDatos();
double potencia(int, int);
int main(){
  ingresarDatos(); 
  return 0;
} 
void ingresarDatos() {
  int base,exponente;
  cout<<"ingrese la base:";
  cin>>base;
  cout<<"ingrese el exponente:";
  cin>>exponente;
  double calculo = potencia(base,exponente);
  cout<<"el resultado de la potenica es: "<<calculo<<"\n";
}
double potencia(int base, int exponente) {
  double guardarRE=1;
  int positivoElevacion = exponente;
  if (positivoElevacion < 0) {
    positivoElevacion *= -1;
  }
  for (int a = 1; a <= positivoElevacion; a++) {
    guardarRE*=base;
  }
  if (exponente < 0) {
    guardarRE = 1.0 / guardarRE;
  }
  return guardarRE;
}
