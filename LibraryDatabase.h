// BankDatabase.h
// BankDatabase class definition. Represents the bank's database.
#ifndef LIBRARY_DATABASE_H
#define LIBRARY_DATABASE_H

#include <vector> // class uses vector to store Account objects
#include "Users.h" // Account class definition
using namespace std;

class LibraryDatabase
{
public:
   LibraryDatabase(); // constructor initializes accounts

   // determine whether account number and PIN match those of an Account
   bool authenticateUser( int, int ); // returns true if Account authentic

   double getAvailableBooks( int ); // get number of available books
   double getTotalBooks( int ); // get total number of books
   void returN( int, double ); // add number to Available books
   void borrow( int, double ); // subtract number from Available books
private:
   vector< Account > accounts; // vector of the bank's Accounts

   // private utility function
   Account * getAccount( int ); // get pointer to Account object
}; // end class LIBRARYDatabase

#endif // LIBRARY_DATABASE_H
