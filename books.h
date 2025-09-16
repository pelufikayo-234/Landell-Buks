#ifndef BOOKS_H
#define BOOKS_H

#include "lms.h"

// Derived Class: Book
class Book : public libraryItem
{
public:
    // returns available number of books
   double getAvailableBooks() const;
   // returns total number of books
   double getTotalBooks() const;
   // adds an amount to the Account balance 
   void returN( double );
   // subtracts a certain amount of books from the Account balance 
   void borroW( double );

   ~Book(); 
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
    


#endif