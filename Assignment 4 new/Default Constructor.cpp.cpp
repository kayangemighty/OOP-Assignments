#include <iostream>
using namespace std;

class Default {
private:
    int num;
public:
    Default() {
        num = 0;
    }
    Default(int num) {
        this->num = num;
    }
    void set(int num) {
        this->num = num;
    }
    void print() {
        cout << num << endl;
    }
};

int main() {
    Default A;
    Default B[20];
    A.set(5);
    A.print();
    return 0;
}