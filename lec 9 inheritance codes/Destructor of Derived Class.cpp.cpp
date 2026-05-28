#include <iostream>
using namespace std;

class Base {
public:
    Base() {}
    ~Base() {
        cout << "Destructor of base class" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {}
    ~Derived() {
        cout << "Destructor of derived class" << endl;
    }
};

int main() {
    Derived* ptr1 = new Derived();
    delete ptr1;
    return 0;
}