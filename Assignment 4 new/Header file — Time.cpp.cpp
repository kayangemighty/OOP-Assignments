#ifndef TIME_H
#define TIME_H

// Class Definition
class Time {
private:
    int hour;   // 0-23
    int minute; // 0-59
    int second; // 0-59
public:
    void printTime();               // Member function Declaration
    void setTime(int, int, int);    // Member function Declaration
};

#endif