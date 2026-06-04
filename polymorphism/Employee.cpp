#include "Employee.h"
#include <iostream>
#include <cstring>
using namespace std;

Employee::Employee(const char *name, int age) {   // Constructor
    this->age = age;                               // Store age
    this->name = new char[strlen(name) + 1];       // Memory allocation
    strcpy(this->name, name);                      // Save name
}

Employee::~Employee() {    // Destructor
    delete []name;         // Free memory
}
