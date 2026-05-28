#include <iostream>
using namespace std;

class SharpPencil {
private:
    int numofSharplead;
public:
    SharpPencil(int n) : numofSharplead(n) {}
};

class Pen {
private:
    int amountofInk;
public:
    Pen(int n) : amountofInk(n) {}
};

class Student {
private:
    SharpPencil* sharppencil;
    Pen* pen;
    char* major;
public:
    Student() {
        sharppencil = new SharpPencil(5);
        pen = new Pen(10);
        major = (char*)"Engineering";
    }
    ~Student() {
        delete sharppencil;
        delete pen;
    }
};

int main() {
    Student s;
    return 0;
}