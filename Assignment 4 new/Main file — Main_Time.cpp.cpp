#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

void main() {
    Time lunchTime;     // Declaration of Variable lunchTime
    Time dinnerTime;    // Declaration of Variable dinnerTime
    // set member variables of lunchTime through member function
    lunchTime.setTime(12, 30, 20);
    // set member variables of dinnerTime through member function
    dinnerTime.setTime(30, 70, 80);   // Invalid Value

    cout << "Lunch will be held at ";
    lunchTime.printTime();
    cout << endl;

    cout << "Dinner will be held at ";
    dinnerTime.printTime();
    cout << endl;
}