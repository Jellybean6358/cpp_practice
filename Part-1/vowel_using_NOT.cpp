#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: "; cin >> ch;
    ch = tolower(ch);

    // Using NOT (!) with a condition that checks if it's NOT a consonant
    if (!(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')) {
        cout << ch << " is a vowel.";
    } else {
        cout << ch << " is not a vowel.";
    }
    return 0;
}