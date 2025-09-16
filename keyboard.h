// Keyboard.h
// Keypad class definition. Represents the keyboard of the LMS.
#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <string>

class Keyboard
{
public:
   std::string getStrInput(std::string) const; // return a string value entered by user
   int getIntegerInput(int) const; // return an integer value entered by user
   std::string getStrItt();
}; // end class Keyboard

#endif // KEYBOARD_H
