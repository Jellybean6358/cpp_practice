#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 5;
    
    cout << "AND operation: " << (a & b) << endl; // Output: 1
    cout << "OR operation: "  << (a | b) << endl; // Output: 7
    cout << "XOR operation: " << (a ^ b) << endl; // Output: 6
    cout << "NOT of 3: "      << (~a)    << endl; // Bitwise NOT
    
    return 0;
}