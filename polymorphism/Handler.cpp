#include "Handler.h"
#include <iostream>
using namespace std;

Handler::Handler(int max) {                    // Constructor
    this->max = max;                           // Initialize Array Size
    numofData = 0;                             // Initialize the number of data
    Array = new Employee*[max];               // allocate memory for pointer array
}

Handler::~Handler() {
    for (int i = 0; i < numofData; i++)
        delete Array[i];                       // Delete Data class
    delete Array;                              // free memory of pointer array
}

bool Handler::AddEmployee(Employee *employee) {  // Add new employee
    if (numofData == max)                         // If Array is full
        return false;                             // return false
    // add employee at array
    Array[numofData++] = employee;
    return true;                                  // return true
}

void Handler::PrintAll() {                        // Print all worker's information
    for (int i = 0; i < numofData; i++)
        Array[i]->PrintInfo();
}
