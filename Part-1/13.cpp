#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char, int> m1;
    int s;
    cin>>s;
    char *arr=new char[s];
    // cin.ignore(1000,'\n');
    // cin.getline(arr,s);
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    for(int i=0;i<s;i++){
        m1[arr[i]]++;
    }
    auto mx=max_element(m1.begin(),m1.end(),[](const auto &x, const auto &y){return x.second<y.second;});
    // auto mx=m1.begin();
    // for(auto it=m1.begin();it!=m1.end();++it){
    //     if(it->second>mx->second){
    //         mx=it;
    //     }
    // }
    //cout<<mx->first<<" "<<mx->second<<endl;
    for(auto it=m1.begin();it!=m1.end();++it){
        if(it->second==mx->second){
            cout<<it->first<<":"<<it->second<<endl;
        }
        
    }

    

    



}