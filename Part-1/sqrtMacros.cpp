#include <iostream>
#include <cmath> // for sqrt()
using namespace std;

#define SQUARE_ROOT(x) sqrt(x)

int main() {
    double num = 25.0;
    cout << "Square root of " << num << " is: " << SQUARE_ROOT(num) << endl;
    return 0;
}