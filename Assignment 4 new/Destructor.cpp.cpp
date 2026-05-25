#include <iostream>
using namespace std;

class Array {
private:
    int* array;
    int size;
public:
    Array(int size) {
        this->size = size;
        array = new int[size];
        cout << "Constructor called, size = " << size << endl;
    }
    ~Array() {
        delete[] array;
        cout << "Destructor called" << endl;
    }
};

int main() {
    Array arr(10);
    return 0;
}