#include "Reverser.h"
#include <cmath>

int Reverser::reverseDigit(int value) {
    if (value < 0) {
        return -1;
    }

    int reversed = 0;
    while (value != 0) {
        int digit = value % 10;
        reversed = reversed * 10 + digit;
        value /= 10;
    }

    return reversed;
}

string Reverser::reverseString(string characters) {
  //get the length of hte string
    int length = characters.length();
    //if the length less than one error
    if (characters.length() <= 1) {
    return "error";
  }

    for (int i = 0; i < length / 2; ++i) {
        char temp = characters[i];
        characters[i] = characters[length - i - 1];
        characters[length - i - 1] = temp;
    }
    return characters;
}
