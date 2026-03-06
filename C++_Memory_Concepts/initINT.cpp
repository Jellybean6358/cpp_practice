#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int value_0{}; //zero-initialisation
    int value_1=1; //copy
    int value_2(2); //direct
    int value_3{3}; //list init
    int value_4={4}; //copy-list init
    auto value_5(5); //auto deduct
    cout<<value_0<<" "<<value_1<<" "<<value_2<<" "<<value_3<<" "<<value_4<<" "<<value_5<<endl;
}