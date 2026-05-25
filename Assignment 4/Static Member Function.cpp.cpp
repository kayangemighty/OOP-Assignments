#include <iostream>
using namespace std;

class Basic {
private:
    static int num1;
    int num2;
public:
    Basic(int n) {
        num2 = n;
        num1++;
    }
    static void PrintStatic() {
        cout << num1 << endl;
    }
    void PrintAll() {
        cout << num1 << " " << num2 << endl;
    }
};

int Basic::num1 = 0;

int main() {
    Basic::PrintStatic();
    Basic b1(10);
    Basic b2(20);
    Basic::PrintStatic();
    b1.PrintAll();
    b2.PrintAll();
    return 0;
}