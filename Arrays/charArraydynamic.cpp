#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    char *names{new char[x]};
    for(int i=0;i<x;i++){
        getline(cin>>ws,names[i]);
    }
    for(int i=0;i<x;i++){
        cout<<names[i]<<endl;
    }
    delete[] names;
}