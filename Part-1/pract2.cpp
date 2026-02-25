#include<iostream>
#include<bits/stdc++.h>
//#include "math.cpp"
//#include<cstring>
using namespace std;
int main(){
    // int a=2,b=1;
    // cout<<add(a,b);
    string str="ABC";
    sort(str.begin(),str.end());
    do{
        cout<<str<<endl;
    }while(next_permutation(str.begin(),str.end()));

}