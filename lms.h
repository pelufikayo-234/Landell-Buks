#ifndef LMS_H
#define LMS_H


#include <iostream>
#include <string>
#include "books.h"
#include "journal.h"
#include "dvd.h"
#include "Keyboard.h"
#include "Screen.h" 
using namespace std;
// Base Class LibraryItem
class libraryItem
{
private:
    /* data */
    string Title;
    string Creator;
    string ItemId;
    string StudentID;
public:
    //libraryItem(string title,string creator , string item_id);
    libraryItem(const string& title, const string& creator, const string& item_id)
        : Title(title), Creator(creator), ItemId(item_id) {}
    void start();
    void authenticateUser();
    bool isAvailable;
    bool isAdmin;
    bool isAuthenticated;
    string CurrentStudentId;
    virtual ~libraryItem();

    Screen screen;
    Keyboard keyboard;

    // setters
    void setTitle(string title);
    void setCreator(string creator);
    void setItemId(string item_id);
    void setStudentID();
    void CreateSudentID();
    // getters
    double getTitle(void);
    double getCreator(void);
    double getItemId(void);
    
    /// @brief  virtual void displayDetails() const = 0;
};


libraryItem lib;

#endif

