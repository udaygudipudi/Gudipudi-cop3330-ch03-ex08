/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Uday Gudipudi
 */

#include "std_lib_facilities.h"

void parity (int number){

  int remainder;

  remainder = number % 2;

  if (remainder == 0){

    std::cout << "The value " << number << " is an even number.\n";

  }

  else {

    std::cout << "The value " << number << " is an odd number.\n";

  }

  return;

}

int main() {

  int number, remainder;

  std::cout << "Enter a number:\n";

  scanf("%d", &number);

  parity(number);
  
  return 0;

} 