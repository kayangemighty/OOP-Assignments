#include "FulltimeWorker.h"
#include <iostream>
using namespace std;

// Constructor
FulltimeWorker::FulltimeWorker(const char *name, int age, int salary)
    : Employee(name, age) {
    this->salary = salary;
}

// Print out information
void FulltimeWorker::PrintInfo() {
    cout << "My name is " << name << ", My age is " << age
         << ", My pay is " << salary << " Won" << endl;
}
