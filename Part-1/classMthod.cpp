#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int regno;
    float mark;

public:
    // Prototypes
    void setDetails(string n, int r, float m);
    void getDetails();
};

// Defining functions outside the class using Scope Resolution Operator (::)
void Student::setDetails(string n, int r, float m) {
    name = n;
    regno = r;
    mark = m;
}

void Student::getDetails() {
    cout << "\n--- Student Details ---" << endl;
    cout << "Name: " << name << "\nReg No: " << regno << "\nMarks: " << mark << endl;
}

int main() {
    Student s1;
    s1.setDetails("Devasena", 101, 88.5);
    s1.getDetails();
    return 0;
}