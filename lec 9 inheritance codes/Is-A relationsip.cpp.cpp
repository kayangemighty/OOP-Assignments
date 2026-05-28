#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char* name;
public:
    Person(const char* name) {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);  // fixed
    }
    ~Person() { delete[] name; }
};

class Student : public Person {
private:
    char* major;
public:
    Student(const char* name, const char* major) : Person(name) {
        this->major = new char[strlen(major) + 1];
        strcpy(this->major, major);  // fixed
    }
    ~Student() { delete[] major; }
};

class ScholarshipStudent : public Student {
private:
    int scholarship;
public:
    ScholarshipStudent(const char* name, const char* major, int scholarship)
        : Student(name, major) {
        this->scholarship = scholarship;
    }
};

int main() {
    ScholarshipStudent ss("Bob", "Math", 5000);
    return 0;
}