#include<iostream>
#include<vector>
using namespace std;
bool isprime(int x){
    //bool flag=
    if(x<=1){
        return false;
    }
    for(int i=2;i<x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int x, y,c=0;
    vector<int> v1;
    cin>>x>>y;
    if(x>y){
        cout<<"Invalid";
    }
    for( int i=x;i<=y;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
}