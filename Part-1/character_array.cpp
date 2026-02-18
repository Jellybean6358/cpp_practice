#include<iostream>
#include<cstring>
#include<unordered_map>
#include<array>
#include<algorithm>
using namespace std;

void countch(char arr1[],int size){
    unordered_map<char,int> ans;
    for(int i=0;i<size;i++){
        ans[arr1[i]]++;
    }
    for(auto &i:ans){
        cout<<i.first<<":"<<i.second<<endl;
    }
}
int main(){
    int opt;
    cout<<"1.charoccurences&len of char array\n2.Compare two character-array\n3.";
    cin>>opt;
    switch(opt){
        case 1:{
            int size;
            cin>>size;
            char *arr=new char[size];
            for(int i=0;i<size;i++){
                cin>>arr[i];
            }
            countch(arr,size);
            cout<<strlen(arr);
            delete[] arr;
            break;
        }
        case 2:{
            array<char,5> arr;
            for(int i=0;i<5;i++){
                cin>>arr[i];
            }
            const char *ch="hello";
            string strarray(arr.begin(),arr.end());
            string strptr(ch);
            if(strarray==strptr){
                cout<<"Matches";
            }
            else{
                cout<<"Mismatches";
            }
            reverse(strarray.begin(),strarray.end());
            for(auto &c:strarray){
                cout<<c;
            }
            //delete ch;
            break;
        }
        case 3:{

        }
        default:break;
    }

}