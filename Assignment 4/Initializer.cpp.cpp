#include <iostream>
using namespace std;

class Initializer {
private:
    const int Data;
public:
    Initializer(int data) : Data(data) {
    }
    void print() {
        cout << Data << endl;
    }
};

int main() {
    Initializer obj(42);
    obj.print();
    return 0;
}