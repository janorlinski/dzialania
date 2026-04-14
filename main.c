#include <iostream>
#include "definicje.h"

int main () {

  double a = 7.2;
  double b = 2.19;
  
  std::cout << "Test dodawania: " << a << " + " << b << " = " << suma(a, b) << endl;  
  std::cout << "Test odejmowania: " << a << " - " << b << " = " << roznica(a, b) << endl;  
  std::cout << "Test mnozenia: " << a << " * " << b << " = " << iloczyn(a, b) << endl;  
  std::cout << "Test dzielenia: " << a << " / " << b << " = " << iloraz(a, b) << endl;

  return 0;

}
