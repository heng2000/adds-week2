#include<iostream>
#include"Reverser.h"
int main ()
{
    Reverser reverser;
    int number =123;
    int result = reverser.reverseDigit(number);
    cout<<result;
    string name ="abcdef";
    string reversename =reverser.reverseString(name);
    cout<<reversename;
    string errname ="q";
    string q =reverser.reverseString(errname);
    cout<<q;
    return 0;
}