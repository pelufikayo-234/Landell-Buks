// Screen.cpp
// Member-function definitions for class Screen.
#include <iostream>
#include <iomanip>
#include "Screen.h" // Screen class definition
using namespace std;

// output a message without a newline
void Screen::displayMessage( string message ) const
{
   cout << message; 
} // end function displayMessage

// output a message with a newline
void Screen::displayMessageLine( string message ) const
{
   cout << message << endl;   
} // end function displayMessageLine

// output a Number of Available Copies of An Item
void Screen::displayAvailableCopies( double amount ) const
{
   cout << fixed << setprecision( 2 )<< amount;
} // end function displayDollarAmount 

