#include<iostream>
#include<vector>
using namespace std;
int isPrime(const int &x){
    int flag=1;
    if(x<=1){
        flag=0;
    }
    for(int i=2;i<x;i++){
        if(x%i==0){
            flag=0;
        }
    }
    return flag;
}
int main(){
    int x, y,c=0;
    vector<int> v1;
    cout<<"Enter range Begin\n End: \n";
    cin>>x>>y;
    if(x>y || (isalpha(x) || isalpha(y))){
        cout<<"Invalid";
    }
    for( int i=x;i<=y;i++){
        if(isPrime(i)==1){
            cout<<i<<" ";
        }
    }
}