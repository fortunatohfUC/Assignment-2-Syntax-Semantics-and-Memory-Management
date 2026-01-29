#include <iostream>
using namespace std;

int main() {
    // C++ program demonstrating manual memory management
    int* ptr = new int(10);  // Dynamically allocated memory
    cout << "Dynamically allocated value: " << *ptr << endl;
    
    delete ptr;  // Freeing dynamically allocated memory
    return 0;
}
