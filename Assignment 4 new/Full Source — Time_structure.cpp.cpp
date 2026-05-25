#include <iostream>
using namespace std;
// Structure Definition
struct Time {
    int hour;   // 0-23
    int minute; // 0-59
    int second; // 0-59
};
// Function Definition
void printTime(Time t) {
    cout << t.hour << " : " << t.minute << " : " << t.second << endl;
}
void main() {
    Time lunchTime;                     // Declaration of Variable lunchTime
    Time dinnerTime = { 18, 30, 0 };      // Declaration & Initialization
    Time* ptrTime = &lunchTime;         // Declaration & Initialization of Pointer

    lunchTime.hour = 12;                // Set member variable hour
    ptrTime->minute = 30;               // Set member variable minute
    (*ptrTime).second = 20;             // Set member variable second

    cout << "Lunch will be held at ";
    printTime(lunchTime);

    cout << "Dinner will be held at ";
    printTime(dinnerTime);
}