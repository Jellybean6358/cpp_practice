#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    if(abs((0.1+0.2)-0.3)<1e-9f){
        cout<<1;
    }
    else{
        cout<<0;
    }
}