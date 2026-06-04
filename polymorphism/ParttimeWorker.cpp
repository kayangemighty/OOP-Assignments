#include "ParttimeWorker.h"
#include <iostream>
using namespace std;

// Constructor
ParttimeWorker::ParttimeWorker(const char *name, int age, int hourly_wage, int work_hour)
    : Employee(name, age) {
    this->hourly_wage = hourly_wage;
    this->work_hour = work_hour;
}

// Print out information
void ParttimeWorker::PrintInfo() {
    cout << "My name is " << name << ", My age is " << age
         << ", My pay is " << hourly_wage * work_hour << " Won" << endl;
}
