#include <iostream>
#include "calculation.cpp"
using namespace std;

int main() {
    int choice;
    double n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    cout << "1.Add 2.Sub 3.Mul 4.Div\nChoice: ";
    cin >> choice;

    switch(choice) {
        case 1:{
            cout << "Result: " << add(n1, n2); 
            break;
        }
        case 2: {
            cout << "Result: " << sub(n1, n2); 
            break;
        }
        case 3: {
            cout << "Result: " << mul(n1, n2); 
            break;
        }
        case 4: {
            cout << "Result: " << divi(n1, n2); 
            break;
        }
        default: cout << "Invalid choice";
    }
    return 0;
}