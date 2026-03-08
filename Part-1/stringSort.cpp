#include<iostream>
#include<bits/stdc++.h>
//#include<cstring>
using namespace std;
int main(){
    string a="Ahmedabad";
    //cin>>a;
    //int s=a.length();
    // sort(a.begin(),a.end());
    map<char, int> m1;
    for(char ch:a){
        m1[ch]++;
    }
    vector<pair<char,int>> m2(m1.begin(),m1.end());
    sort(m2.begin(),m2.end(),[](const pair<char,int> &a,const pair<char,int> &b){if(a.second!=b.second){
        return a.second>b.second;}return a.first<b.first;});
    //sort(m2.begin(),m2.end(),[](const pair<char,int> &a,const pair<char,int> &b){return a.second>b.second;});
    // for(const auto itr=m2.begin();itr!=m2.end();++itr){
    //     cout<<itr->first<<":"<<itr->second<<endl;
    // }
    string result;
    for(const auto &[ch,m1]:m2){
        result.append(m1,ch);
    }
    cout<<result;

    //cout<<a;
}