// Screen.h
// Screen class definition. Represents the screen of the ATM.
#ifndef SCREEN_H
#define SCREEN_H

#include <string>
using namespace std;

class Screen
{
public:
   // output a message
   virtual void displayMessage( string ) const;
   // output message with newline 
   virtual void displayMessageLine( string ) const; 
   // output a dollar amount
   virtual void displayAvailableCopies( double ) const; 
}; // end class Screen

#endif // SCREEN_H
