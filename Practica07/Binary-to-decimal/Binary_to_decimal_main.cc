/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file Binary_to_decimal_main.cc
  * @author Nicolás Pérez González
  * @mail alu0101558219@ull.edu.es
  * @date 31 / 10 / 2023
  * @brief Un programa binary-to-decimal.cc que convierta números binarios en decimal. No utilice los tipos std::string, std::vector o std::array. Si la entrada no fuera un número binario, el programa debe imprimir en pantalla un mensaje de error y finalizar la ejecución.
  * @bug There are no known bugs
  */

#include "Binary_to_decimal.h"
#include <cmath>

int main () {
  unsigned long numero{0};
  unsigned int sum{0};
  int exp{0};

  std::cin >> numero;
  while ( numero != 0 ) {
    if ( binario (numero%10) == false ) {
      std::cout << "Número no valido por el caracter " << numero%10 << std::endl;
      return 0;
    }
    if ( numero%10 == 1 ) {
      sum += pow(2, exp);
    }
    numero /= 10;
    exp++;
  }
  std::cout << sum << std::endl;
  return 0;
}