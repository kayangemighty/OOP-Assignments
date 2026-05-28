#include <iostream>
using namespace std;

class Mid1 {
private:
    int number;
public:
    Mid1(int num) : number(num) {}

    void Mid_function() {
        cout << "Mid1 number is " << number << endl;
    }
};

class Mid2 {
private:
    int number;
public:
    Mid2(int num) : number(num) {}

    void Mid_function() {
        cout << "Mid2 number is " << number << endl;
    }
};

class Final : public Mid1, public Mid2 {
public:
    Final(int num1, int num2) : Mid1(num1), Mid2(num2) {}

    void show() {
        Mid1::Mid_function();  // explicitly call Mid1 version
        Mid2::Mid_function();  // explicitly call Mid2 version
    }
};

int main() {
    Final obj(1, 2);
    obj.show();  // cleaner call
    return 0;
}