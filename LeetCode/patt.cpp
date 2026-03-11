#include<iostream>
using namespace std;
int main(){
    int n=5;
    //cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(){}
}