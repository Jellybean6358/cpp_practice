#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: "; cin >> n;

    if (n % 3 == 0 && n % 5 == 0){
        cout << "Number is divisible by both 3 and 5";
    }
    else if (n % 3 == 0 && n % 2 != 0){
        cout << "Divisible by 3 but not even";
    }
    else if (n % 3 != 0 || n % 5 != 0){
        cout << "Not divisible by 3 or 5";
    }

    return 0;
}