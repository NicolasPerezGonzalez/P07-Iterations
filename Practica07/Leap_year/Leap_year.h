/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file Leap_year.h
  * @author Nicolás Pérez González
  * @mail alu0101558219@ull.edu.es
  * @date 31 / 10 / 2023
  * @brief Un programa que indique si un año es o no bisiesto Un año bisiesto tiene 366 días. Después de la reforma gregoriana, los años bisiestos son aquellos múltiplos de cuatro que no terminan con dos ceros, y también los años que terminan con dos ceros tales que, después de eliminar estos dos ceros, son divisibles por cuatro. Así, 1800 y 1900, a pesar de ser múltiplos de cuatro, no fueron años bisiestos; por el contrario, 2000 fue un año bisiesto.
  * @bug There are no known bugs
  */

#include <iostream>

bool leap (int year);