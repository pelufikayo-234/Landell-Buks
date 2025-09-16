// Account.h
// Account class definition. Represents a bank account.
#ifndef USERS_H
#define USERS_H

class User
{
public:
   bool isAdmin;
   // constructor sets attributes
   User( int, int, double, double );
   
   // is user-specified PIN correct?
   bool validatePIN( int ) const; 
    // returns available number of books
   double getAvailableBooks() const;
   // returns total number of books
   double getTotalBooks() const;
   // adds an amount to the Account balance 
   void returN( double );
   // subtracts a certain amount of books from the Account balance 
   void borroW( double );
   // returns UserID 
   int getUserID() const; 
private:
   // getUserName 
   string UserName;
   // User ID
   int UserID;
   // PIN for authentication 
   int pin;
   // Books available for borrow 
   double NumAvailableBooks;
   // Books available + Books waiting to clear 
   double totalNumBooks; 
}; // end class Account

#endif // USERS_H


