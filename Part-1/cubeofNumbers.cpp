#include <iostream>
using namespace std;

void printCubes(int n) {
    for(int i = 1; i <= n; i++) {
        cout << i*i*i << " //cube of " << i << " is = " << i*i*i << endl;
    }
}

int main() {
    printCubes(5);
    return 0;
}