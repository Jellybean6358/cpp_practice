#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void print_binaryform(float f_value1){
    int bits;
    memcpy(&bits,&f_value1,sizeof(f_value1));
    bitset<32> binary(bits);
    cout<<"float value: "<<fixed<<setprecision(1)<<f_value1<<endl;
    cout<<"binary: "<<binary<<endl;
    cout<<"sign bit: "<<binary[31]<<"\nExp:\n";
    for(int itr=30;itr>=23;itr--){
        cout<<binary[itr];
    }
    cout<<"\nMantissa:\n";
    for(int itr=22;itr>=0;itr--){
        cout<<binary[itr];
    }
    string s=binary.to_string();
    cout<<"\n"<<s;
    
}
int main(){
    float f_value{-10.0f};
    print_binaryform(f_value);
}