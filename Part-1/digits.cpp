#include <iostream>
using namespace std;

int main() {
    long long n = 56789001;
    int count = 0;
    while(n > 0) {
        n /= 10;
        count++; // Using post-increment to track digits
    }
    cout << "Number of digits: " << count << endl;
    return 0;
}