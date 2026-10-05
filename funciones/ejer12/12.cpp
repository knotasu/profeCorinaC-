#include <iostream>
using namespace std;
void valoresParaElBucle(int);
int main() {
  int b = 100;
  valoresParaElBucle(b);
  return 0;
}
void valoresParaElBucle(int b) {
  for (int a = 1; a <= b; a++) {
    if (a % 5 == 0) {
      cout<<a<<" ";
    }
  }
  cout<<"\n";
}
