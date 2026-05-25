#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;
public:
    void setTime(int Hour, int Minute, int Second) {
        hour = (Hour >= 0 && Hour < 24) ? Hour : 0;
        minute = (Minute >= 0 && Minute < 59) ? Minute : 0;
        second = (Second >= 0 && Second < 59) ? Second : 0;
    }
    void printTime() {
        cout << hour << " : " << minute << " : " << second << endl;
    }
};

int main() {
    Time lunchTime;
    lunchTime.setTime(12, 30, 20);
    lunchTime.printTime();
    return 0;
}