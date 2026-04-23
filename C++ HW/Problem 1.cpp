#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char name[50];
    int studentID;
    int age;

public:
    void init(const char* inputName, int inputID, int inputAge) {
        strcpy(name, inputName);
        studentID = inputID;
        age = inputAge;
    }

    void printStudentInfo() {
        cout << "Name: " << name << ", ID: " << studentID << ", Age: " << age << endl;
    }

    int getID() {
        return studentID;
    }

    int getAge() {
        return age;
    }

    const char* getName() {
        return name;
    }
};

void personSwap(Person* a, Person* b) {
    Person temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    Person p1, p2;
    p1.init("Alice", 2026312345, 20);
    p2.init("Bob", 2019354321, 25);

    cout << "Before Swap:" << endl;
    p1.printStudentInfo();
    p2.printStudentInfo();

    personSwap(&p1, &p2);

    cout << endl;
    cout << "After Swap:" << endl;
    p1.printStudentInfo();
    p2.printStudentInfo();

    return 0;
}
