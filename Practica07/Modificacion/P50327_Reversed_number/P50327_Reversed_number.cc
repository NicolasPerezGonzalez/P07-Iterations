/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file 
  * @author Nicolás Pérez González
  * @mail alu0101558219@ull.edu.es
  * @date 2 / 10 / 2023
  * @brief A program that reads a number and prints it reversed.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P50327_en
  */

#include <iostream>
#include <string>
#include <algorithm>

int main () {

    std::string tmp_s;
    std::cin >> tmp_s;
    
    std::string tmp_s_reversed (tmp_s.rbegin(), tmp_s.rend());
    std::cout << tmp_s_reversed << std::endl;
    return 0;
}
