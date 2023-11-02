/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file Decimal_to_binary_main.cc
  * @author Nicolás Pérez González
  * @mail alu0101558219@ull.edu.es
  * @date 31 / 10 / 2023 
  * @brief Un programa decimal-to-binary.cc que convierta números de decimal a binario. No utilice los tipos std::string, std::vector o std::array.
  * @bug There are no known bugs
  */

#include "Decimal_to_binary.h"

int main () {
  int decimal{0};

  std::cin >> decimal;
  std::cout << db(decimal) << std::endl;
  return 0;
}