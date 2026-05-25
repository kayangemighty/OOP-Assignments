#include <iostream>

int adder(int a, int b) {
    return a + b;
}

double adder(int a, int b) {
    return (double)(a + b);
}

void main(void) {
    adder(5, 10);
    adder(5, 10);
}