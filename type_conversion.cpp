/*
 * Assignment 02: Type Conversion in Compiler Design
 * Name: Abraham Addisu
 * ID: 1504850
 */

#include <iostream>
using namespace std;

int main() {
    cout << "--- Compiler Design: Type Conversion Demo ---\n";

    // 1. IMPLICIT CONVERSION (Widening)
    // The compiler automatically converts int to double.
    int num = 10;
    double decimal = 5.5;
    double result = num + decimal; // 'num' becomes 10.0 here
    
    cout << "[Implicit] 10 + 5.5 = " << result << " (int promoted to double)\n";

    // 2. EXPLICIT CONVERSION (Narrowing)
    // The programmer forces double to int (potential data loss).
    double pi = 3.14159;
    int pi_int = (int)pi; // .14159 is removed

    cout << "[Explicit] 3.14159 cast to int = " << pi_int << " (Data loss!)\n";

    return 0;
}