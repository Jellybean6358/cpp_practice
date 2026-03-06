#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned int a=-1;
    cout<<a+1;
    int bits;
    memcpy(&bits,&a,sizeof(a));
    bitset<32> binary(bits);
    cout<<"\n"<<binary<<" "<<long(pow(2,32));
}