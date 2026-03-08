#include<iostream>
#include<bits/stdc++.h>
//#include<cstring>
using namespace std;
int main(){
    string s="it is today&kamal";
    s+='\0';
    int c=0;

    for(int i=0;i<s.length();i++){
        if(isalnum(s[i])){
            if(!isalnum(s[i+1])&&(s[i+1]==' '||s[i+1]=='\0')){
                c++;
            }
            
        }
    }
    cout<<c;
}