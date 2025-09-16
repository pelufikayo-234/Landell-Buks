// Account.cpp
// Member-function definitions for class Account.
#include "Users.h" // Account class definition
#include "Screen.h"

// Account constructor initializes attributes
User::User( int theUserID, int thePIN, 
   double theAvailableBooks, double theTotalBooks )
   : UserID( theUserID ),
     pin( thePIN ),
     NumAvailableBooks( theAvailableBooks ),
     totalNumBooks( theTotalBooks )
{
   // empty body
} // end user constructor

// determines whether a user-specified PIN matches PIN in Account
bool User::validatePIN( int userPIN ) const
{ 
   if ( userPIN == pin )
      return true;
   else
      return false;
} // end function validatePIN

// returns available balance
double User::getAvailableBooks() const
{
   return NumAvailableBooks;
} // end function getAvailableBalance

// returns the total balance
double User::getTotalBooks() const
{
   return totalNumBooks;
} // end function getTotalBalance

// credits an amount to the account
void User::returN( double num_of_books )
{
   totalNumBooks += num_of_books; // add to total balance
} // end function credit

// debits an amount from the account
void User::borroW( double num_of_book )
{
   NumAvailableBooks -= num_of_book; // subtract from available balance
   totalNumBooks -= num_of_book; // subtract from total balance
} // end function debit

// returns account number
int User::getUserID() const
{
   return UserID;  
} // end function getUserID


if (!lib.isAdmin)
{
   /* code */
   Screen.displayMessage("Enter your UserName: ");
   string UserName = Keyboard.getStrinput();
   Screen.displayMessage("Enter your Password: ");
   string password  = keyboard.getStrinput();
}
else {

}