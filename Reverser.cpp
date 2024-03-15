#include "Reverser.h"
#include <cmath>

int Reverser::reverseDigit(int value) {
  if (value < 0) {
    return -1;
  }

  if (value < 10) {
    return value;
  }
  // get 
  int othernum = value % 10;

  int number = 1;
  while (value / pow(10, number) > 10) {
    number++;
  }
  return othernum * pow(10, number) + reverseDigit(value / 10);
}

string Reverser::reverseString(string characters) {
  //get the length of hte string
    //if the length less than one error
    if (characters.length() <= 1) {
    return "error";
  }

  char laskstring = characters.back();
  characters.pop_back();
  return laskstring + reverseString(characters);
}
