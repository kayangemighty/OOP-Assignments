#include <iostream>
using namespace std;

class Base {
private:
    int Base_private;
protected:
    int Base_protected;
public:
    int Base_public;
    void setBasenum(int n1, int n2, int n3) {
        Base_private = n1;
        Base_protected = n2;
        Base_public = n3;
    }
};

class Derived : public Base {
public:
    void setBasenum(int n2, int n3) {
        Base_protected = n2;  // OK
        Base_public = n3;  // OK
        // Base_private = n1; // would be compile error
    }
};

int main() {
    Base base;
    // base.Base_private   = 1; // compile error
    // base.Base_protected = 2; // compile error
    base.Base_public = 3;       // OK
    return 0;
}
