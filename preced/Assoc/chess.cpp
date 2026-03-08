#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void visualizeArray(const vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<"\033[2J\033[H";
        cout<<"Array: ";
        for(int value:arr) cout<<value<<" ";
        cout<<"\n";
        for(int j=0;j<i;++j){
            cout<<" ";
        }
        cout<<"^\n";
        cout<<"checking index: "<<i<<"(Valye:"<<arr[i]<<")"<<endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }
} 
int main(){
    vector<int> arr;
    for(int i=1;i<50;i++){
        arr.push_back(i);
    }
    visualizeArray(arr);
}