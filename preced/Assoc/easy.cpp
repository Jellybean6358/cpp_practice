#include<iostream>
using namespace std;
int main(){
    int i=0;
    if(i++ && ++i){}
    cout<<i;
}