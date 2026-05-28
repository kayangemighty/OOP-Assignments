#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char* name;
    int age;

public:
    Person(int age, const char* name) {
        this->age = age;
        this->name = new char[strlen(name) + 1];
        strcpy_s(this->name, strlen(name) + 1, name);
    }

    ~Person() {
        delete[] name;
    }

    void PrintPerson() {
        cout << "My age is " << age << endl;
        cout << "My name is " << name << endl;
    }
};

class Student : public Person {
private:
    char* major;

public:
    Student(int age, const char* name, const char* major)
        : Person(age, name) {
        this->major = new char[strlen(major) + 1];
        strcpy_s(this->major, strlen(major) + 1, major);
    }

    ~Student() {
        delete[] major;
    }

    void PrintStudent() {
        PrintPerson();
        cout << "My major is " << major << endl;
    }
};

int main() {
    Student s(20, "Alice", "Computer Science");
    s.PrintStudent();
    return 0;
}