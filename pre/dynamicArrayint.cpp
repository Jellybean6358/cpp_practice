#include<iostream>
using namespace std;

int main(){
    // size_t length{};
    // cin>>length;

    // int *array{new int[length]{}};
    // cout<<"array length: "<<length<<"\n";

    // array[0]=10;

    auto *array{new int[5]{3,1,9,2,1}};
    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }
    delete[] array;
}