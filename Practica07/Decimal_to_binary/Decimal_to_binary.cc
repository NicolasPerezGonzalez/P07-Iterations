/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file Decimal_to_binary.cc
  * @author Nicolás Pérez González
  * @mail alu0101558219@ull.edu.es
  * @date 31 / 10 / 2023 
  * @brief Un programa decimal-to-binary.cc que convierta números de decimal a binario. No utilice los tipos std::string, std::vector o std::array.
  * @bug There are no known bugs
  */

#include "Decimal_to_binary.h"

int db (int decimal) {
  int binary{0};
  int exp{0};
  while (decimal!=1) {
    binary += (decimal%2)*pow(10,exp);
    ++exp;
    decimal/=2;
  }
  binary += (decimal%2)*pow(10,exp);
  return binary;
}