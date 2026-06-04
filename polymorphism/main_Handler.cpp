#include "Handler.h"
#include "ParttimeWorker.h"
#include "FulltimeWorker.h"
#include <iostream>
using namespace std;

void main_Handler() {
    Handler handler(30);                                        // Create Handler
    // Create and add new parttime worker
    handler.AddEmployee(new ParttimeWorker("Kim", 23, 5000, 120));
    // Create and add new fulltime worker
    handler.AddEmployee(new FulltimeWorker("Park", 24, 880000));
    // Print all employees' information
    handler.PrintAll();
}

int main() {
    main_Handler();
    return 0;
}
