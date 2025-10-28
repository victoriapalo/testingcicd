#include "calculator.h"
#include <stdexcept>

// calculator.cpp
// -----------------------------
// Implementation of basic arithmetic functions.

// Adds two integers.
int add(int a, int b) {
    return a + b;
}

// Subtracts second integer from the first.
int subtract(int a, int b) {
    return a - b;
}

// Multiplies two integers.
int multiply(int a, int b) {
    return a * b;
}

// Divides first integer by second.
// Throws std::invalid_argument if division by zero is attempted.
double divide(int a, int b) {
    if (b == 0)
        throw std::invalid_argument("Cannot divide by zero");
    return static_cast<double>(a) / b;
}
