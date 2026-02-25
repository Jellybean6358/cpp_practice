#include<iostream>
#include<bits/stdc++.h>
//#include<cstring>
using namespace std;
int fact(int n){
    if(n<=1){
        return n;
    }
    return fact(n-1)+fact(n-2);
}
int nPr(int n, int r){
    return fact(n)/fact(n-r);
}
int main(){
    int n,r;
    cin>>n>>r;
    //nPr = n!/ (n-r)! =n(n-1) (n-2) (n-3) ..... (n-r+1)
    cout<<nPr(n,r);


}