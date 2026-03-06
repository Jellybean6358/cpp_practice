#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int value_1=11;
    short value_2=11;
    short int value_3=11;
    // cout<<bitset<32>(value_1)<<" "<<endl;
    // cout<<bitset<16>(value_2)<<endl;
    cout<<"int:       "<<sizeof(value_1)*8<<" "<<bitset<sizeof(value_1)*8>(value_1)<<endl;
    cout<<"short:     "<<sizeof(value_2)*8<<" "<<bitset<sizeof(value_2)*8>(value_2)<<endl;
    cout<<"short int: "<<sizeof(value_3)*8<<" "<<bitset<sizeof(value_3)*8>(value_3)<<endl;
    //cout<<value_1<<" "<<a;

}