#include<iostream>
#include<bits/stdc++.h>
//#include<cstring>
using namespace std;
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int main(){
    int n=5,r=2;
    cout<<fact(n)/fact(n-r);
    
}