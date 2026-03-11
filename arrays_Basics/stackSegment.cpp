#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

void print_Stack_Frame ( const string &functionName, const string &varName, int *address ){
    cout << functionName << " " << varName << " " << address << "\n";
}

void processArray () {
    int arr[10]{ 400 , 405 , 410 , 415 , 'X' , '76.90' , 1 , 2 , 9 , 10 };
    cout << "\nprocessArray() stack frame\nLower memory address\n";
    for( int i = 0 ; i < 10 ; ++i ){
        print_Stack_Frame( "processArray()", "arr["+to_string(i)+"]" , &arr[i] );
    }
    cout << "---------------\n" ;
}

void outerFunction () {
    int outerVariable = 2025;
    cout << "outerFunction() stack frame\n";
    print_Stack_Frame ( "outerFunction()", "outerVariable", &outerVariable);
    cout<< "--------------\n";
    processArray();
}

int main () {
    int mainVariable = 2026.56;
    cout << "Main stack frame\nHigher memory address\n";
    print_Stack_Frame ( "Main function()" , "mainVariable" , &mainVariable );
    cout << "-------------\n";
    outerFunction();
    cout<<"\npgm ended\n";
}