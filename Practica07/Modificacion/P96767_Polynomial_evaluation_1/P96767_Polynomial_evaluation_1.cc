/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file P96767_Polynomial_evaluation_1.h
  * @author Nicolás Pérez González
  * @mail alu0101558219@ull.edu.es
  * @date 2 / 10 / 2023
  * @brief A program that reads a number x and a polynomial p(z) = c0 z0 + c    1 z1 + ⋯ + cn zn, and computes p(x).
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P96767_en
  */
 
#include <iostream>
#include <cmath>
#include <iomanip>

int main () {
  double sum{0.0}; //resultado de sustituir en x
  double aux{0.0}; //numeros de entrada
  int exp{0}; //exponente
  double num{0.0}; //solucion de la ecuacion a resolver

  std::cin >> num;
  while () {
    std::cin >> aux;
    sum = sum + aux*pow(num,exp);
    std::cout << sum << std::endl;
    ++exp;
  }
  std::cout << std::fixed << std::setprecision(4) << sum << std::endl; 
  return 0;
}
