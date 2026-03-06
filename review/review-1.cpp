#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Student{
        int x=10;
        char ch=65;
};
int main(){
    // Student s1;
    cout<<"struct size: "<<sizeof(Student)<<endl;
    cout<<"align of class: "<<alignof(Student)<<endl;
    cout<<"align of int: "<<alignof(int)<<endl;
    cout<<"align of char: "<<alignof(char);
}