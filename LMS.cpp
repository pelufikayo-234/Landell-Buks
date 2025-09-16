// LMS stands for Library Management System
#include <iostream>
#include "lms.h"
#include <string>
using namespace std;


void libraryItem::setTitle(string title){
    Title = title;
}

void libraryItem::setCreator(string creator){
    Creator = creator;
}

void libraryItem::setItemId(string item_id){
    ItemId = item_id;
}

void libraryItem::CreateSudentID(){
   cout<<"Please Enter Your Matric Number: ";
   StudentID = keyboard.getIntegerInput();
}





/*
// enumeration constants represent main menu options
enum MenuOption { ITEM_AVAILABILITY = 1, BORROW = 2, RETURN = 3, EXIT = 4 };

// LMS default constructor initializes data members
libraryItem::libraryItem() 
   : isAuthenticated ( false ), // user is not authenticated to start
     currentStudentId( 0 ) // no current account number to start
{
   // empty body
} // end libraryItem default constructor

// start LMS
void libraryItem::start()
{
   // welcome and authenticate user; perform transactions
   while ( true )
   {
      // loop while user is not yet authenticated
      while ( !isAuthenticated ) 
      {
         screen.displayMessageLine( "\nWelcome!" );       
         authenticateUser(); // authenticate user
      } // end while
      
      performTransactions(); // user is now authenticated 
      userAuthenticated = false; // reset before next ATM session
      currentAccountNumber = 0; // reset before next ATM session 
      screen.displayMessageLine( "\nThank you! Goodbye!" );
   } // end while   
} // end function run

// attempt to authenticate user against database
void libraryItem::authenticateUser()
{
   screen.displayMessage( "\nPlease enter your Student ID: " );
   CurrentSudentId = keyboard.getStrInputs();
   // set isAuthenticated to bool value returned by database
   if (CurrentStudentId == studentID) // save user's ID
   {
        isAuthenticated = true;
    } 
   else
      screen.displayMessageLine( 
         "Invalid account number or PIN. Please try again." );
} // end function authenticateUser

*/