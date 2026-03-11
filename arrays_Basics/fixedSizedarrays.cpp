#include<iostream>
using namespace std;
int main(){
    int *arr=new int[6]{10,20};
    arr[5]=-1;
    int itr1=0,itr2=0;
    //cout<<"Value pointed by Internal pointer: "<<*(arr)<<endl;
    for(int itr1=0;;++itr1){
        cout<<"Value at index: "<<itr1<<" : "<<*(arr+itr1)<<endl;
        if(*(arr+itr1)==-1){
            break;
        }
    }
    cout<<"size of Internal pointer: "<<sizeof(arr)<<endl;
    delete[] arr;
}