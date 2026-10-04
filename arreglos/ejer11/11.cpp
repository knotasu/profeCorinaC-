#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int categorias[25], perro;
  float precios[25] = {0};
  char productos[25][14] = {
      "bandeja",      "copas",         "televisor",  "sillon",     "mesas",
      "ventiladores", "vitaminas",     "microondas", "zapato",     "pc i3",
      "pc i7",        "fuentede",      "cajon",      "tensometro", "telefonos",
      "memorias",     "pasta termica", "aires",      "pizarras",   "lavadora",
      "pizza",        "arepa",         "cerveza",    "rom",        "wisky"};
  cout << "ingrese las categorias de lo productos del 1 al 5\n";
  cout << "--producto--    categoria\n";
  for (perro = 0; perro < 25; perro++) {
    cout << "\"" << productos[perro] << "\"" << " (ingrese): ";
    cin >> categorias[perro];
    while (cin.fail() || categorias[perro] < 1 || categorias[perro] > 5) {
      if (cin.fail()) {
        cout
            << "bro metiste texto jajaja son numeros mas bien del 1 al 5 wey\n";
        cin.clear();
        cin.ignore(10000, '\n');
      } else {
        cout << "puso una categoria que no es bro vuelve hacerlo\n";
      }
      cout << "\"" << productos[perro] << "\"" << " (ingrese): ";
      cin >> categorias[perro];
    }
  }
  for (perro = 0; perro < 25; perro++) {
    if (categorias[perro] == 1) {
      precios[perro] = 100.0 * 0.90;
    } else if (categorias[perro] == 2) {
      precios[perro] = 150.0 * 0.88;
    } else if (categorias[perro] == 3) {
      precios[perro] = 180.0 * 0.84;
    } else if (categorias[perro] > 3) {
      precios[perro] = 200.0 * 0.80;
    }
  }
  cout << left;
  cout << fixed << setprecision(2);
  cout << setw(15) << "--productos-- " << setw(15) << "--categorias--"
       << " --nuevo precio--\n";
  for (perro = 0; perro < 25; perro++) {
    cout << setw(22) << productos[perro] << setw(12) << categorias[perro]
         << " $" << precios[perro] << "\n";
  }
  cout << defaultfloat;
  cout << right;
  return 0;
}
