#include <iostream>
using namespace std;

class A {
private:
    int Private;
    void Private_function() {
        return;
    }
public:
    int Public;
    void Public_function() {
        return;
    }
    void Access_Private() {
        Private = 1;
    }
};

int main() {
    A test;
    test.Public = 2;
    test.Public_function();
    test.Access_Private();
    return 0;
}