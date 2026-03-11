#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void displaySize(int arr[]){
    cout<<sizeof(arr)<<endl;
}

void displaySize_1(int (&arr)[10]){
    cout<<sizeof(arr)<<endl;

}
int main(){
    int arr[]= {11,12,13,14,11,23,12,13,14,17};
    cout<< sizeof(arr)<< endl;
    displaySize( arr );
    displaySize_1( arr );
}
