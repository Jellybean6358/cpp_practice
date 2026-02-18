#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    string *names{new string[x]};
    for(int i=0;i<x;i++){
        getline(cin>>ws,names[i]);
    }
    for(int i=0;i<x;i++){
        cout<<names[i]<<endl;
    }
}
