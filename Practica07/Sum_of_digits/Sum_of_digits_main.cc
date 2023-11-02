/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file Sum_of_digits_main.cc
  * @author Nicolás Pérez González
  * @mail alu0101558219@ull.edu.es
  * @date 31 / 10 / 2023
  * @brief Un programa que lea un número natural e imprima como salida la suma de los dígitos del número en cuestión.
  * @bug There are no known bugs
  */

#include "Sum_of_digits.h"

int main () {
  int suma{0};
  int numero{0};

  std::cin >> numero;
  if ( numero == 0 ) {
    std::cout << "0" << std::endl;
    return 0;
  }
  while ( numero != 0 ) {
    suma = sumatorio(suma, numero%10);
    numero /= 10;                         // numero = numero/10
  }
  std::cout << suma << std::endl;
  return 0;
}
 