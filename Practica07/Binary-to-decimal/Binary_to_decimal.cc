/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file Binary_to_decimal.cc
  * @author Nicolás Pérez González
  * @mail alu0101558219@ull.edu.es
  * @date 31 / 10 / 2023
  * @brief Un programa binary-to-decimal.cc que convierta números binarios en decimal. No utilice los tipos std::string, std::vector o std::array. Si la entrada no fuera un número binario, el programa debe imprimir en pantalla un mensaje de error y finalizar la ejecución.
  * @bug There are no known bugs
  */

#include "Binary_to_decimal.h"

bool binario ( int num ) {
  if ( num == 0 || num == 1 ) {
    return true;
  } else {
    return false;
  }
}