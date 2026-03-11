#include<iostream>
using namespace std;
int main(){
    int arr[2][3];
    cout<<"Enter elements\n";
    for(int i=0;i<2;++i){
        for(int j=0;j<3;++j){
            cin>>arr[i][j];
        }
    }
    int *first=&arr[0][0];
    int *addr;
    addr=first+(1*3+1);
    cout<<*addr;

}