#include<iostream>
#include<algorithm>
using namespace std;
void ispalin(string x){
    string rev=x;
    reverse(rev.begin(),rev.end());
    if(x==rev){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}
int main(){
    // int n=1221,rev=0;
    // int temp=n;
    // while(n>0){
    //     rev=rev*10+n%10;
    //     n/=10;
    // }
    // if(temp==rev){
    //     cout<<1;
    // }
    // else{
    //     cout<<-1;
    // }
    ispalin("ANNA");
}