#include <iostream>
using namespace std;

// Function demonstrating scope and variable lifetime
void demonstrateScope() {
    int outerVariable = 10;  // Outer variable
    {
        int innerVariable = 5;  // Inner variable inside the block
        cout << "Sum in C++: " << outerVariable + innerVariable << endl;  // Accessing outer variable
    }
    // innerVariable is not accessible here, it is out of scope
}

int main() {
    demonstrateScope();
    return 0;
}
