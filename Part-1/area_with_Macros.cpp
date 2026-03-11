#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159

int main(){
    float radius,area,cirumference;
    cout<< "Enter radius, can't be less than 1 unit: ";
    cin>> radius;
    cout<< "Area : "<< PI*radius*radius<< endl;
    cout<< "Circumference : "<< 2*PI*radius<< endl;
}