// Keyboard.cpp
// Member-function definition for class Keyboard (the LMS's keypad).
#include <iostream>
#include "Keyboard.h" // Keyboard class definition
using namespace std;

// return an string value entered by user
string Keyboard::getStrInput() const
{
   string input; // variable to store the input
   cin >> input; // we assume that user enters an string
   return input; // return the value entered by user
} // end function getInput

// return an integer value entered by user
int Keyboard::getIntegerInput() const
{
   int input; // variable to store the input
   cin >> input; // we assume that user enters an integer
   return input; // return the value entered by user
} // end function getInput
