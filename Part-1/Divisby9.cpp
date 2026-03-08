#include <iostream>
using namespace std;

int main() {
    int start = 100, end = 200, sum = 0;
    cout << "Numbers divisible by 9 are: " << endl;
    for(int i = start; i <= end; i++) {
        if(i % 9 == 0) {
            cout << i << " ";
            sum += i;
        }
    }
    cout << "\nSum of digits: " << sum << endl;
    return 0;
}