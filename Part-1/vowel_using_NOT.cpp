#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    char ch;
    cout<< "Enter a character: "; 
    cin>> ch;
    if(sizeof(ch)==0){
        cout<< "Re-enter: "<< endl;
        cin>> ch;
    }
    else if(!isalpha(ch)){
        cout<< "Not a character, try again: "<< endl;
        cin>> ch;
    }
    ch= tolower(ch);
    if (!(ch!= 'a' && ch!= 'e' && ch!= 'i' && ch!= 'o' && ch!= 'u')) {
        cout<< ch<< " : Vowel.";
    } else {
        cout<< ch<< " : Not a vowel.";
    }
}