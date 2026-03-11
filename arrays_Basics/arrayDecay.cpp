#include<iostream>
#include<bits/stdc++.h>
using namespace std;

float sum(float arr[]){
    int itr=1;
    while(*(arr+itr)!='\0'){
        arr[0]+=arr[itr];
        ++itr;
    }
    return arr[0];
}
int main(){
    float *arr=new float[5]{20.0f,20.1f,20.2f,1 ,'\0'};
    cout<<sum(arr);
    delete[] arr;
}