/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file Fibonacci_main.cc
  * @author Nicolás Pérez González
  * @mail alu0101558219@ull.edu.es
  * @date 31 / 10 / 2023
  * @brief Un programa que imprima los N primeros términos de la Serie de Fibonacci. Los primeros términos de la serie son: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, ...
  * @bug There are no known bugs
  */

#include "Fibonacci.h"

int main () {
  int counter{0};
  int next{1};
  int num{0};

  std::cin >> counter;
  while ( counter != 0 ) {
    std::cout << num << " ";
    next = sumatorio(next, num);
    num = next - num;
    --counter;
  }
  std::cout << std::endl;

}