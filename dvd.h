#ifndef DVD_H
#define DVD_H

#include "lms.h"

// ============================
// Derived Class: DVD
// ============================
class DVD: public libraryItem
{
private:
    /* data */
    double duration(int Hour, int Minute, int Seconds);
public:
    DVD(/* args */);
    ~DVD();
    void setDuration();
};

#endif // 
