#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[7]={4,2,1,3,9,99,2};
    int s=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<s-1;i++){
        for(int j=0;j<s-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
    for(int x:a){
        cout<<x<<" ";
    }
    return 0;
}