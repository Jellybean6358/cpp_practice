#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5]={1,2,3,4,5};
    // int *addr=a;
    //base address+(index*size of one element(bytes))
    cout<<static_cast<const void *>(a)+(1*4)<<endl;
    cout<<&a[1];
}