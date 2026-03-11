#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int value=0;
    for(int i=0;i<8;++i){
        value+=pow(2,i);
    }
    cout<<value;
    
}