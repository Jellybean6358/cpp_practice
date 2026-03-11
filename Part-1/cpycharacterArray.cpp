#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    char *ch1 = new char[3];
        cin >> ch1[0];
        cin >> ch1[1];
        ch1[2] = '\0';
        cin.ignore(1000, '\n');

        char *ch = new char[7];
        cin.getline(ch, 7);
        cout << "\n";
        memcpy(ch, ch1, 3);
        // cout<<ch<<endl;
        for (int i = 0; i < 7; i++)
        {
            cout << ch[i];
        }
        delete[] ch1;
        delete[] ch;
}