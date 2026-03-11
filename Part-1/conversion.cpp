#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int opt;
    cout<<"option\n1.binary to decimal\n2.decimal to binary\n3.binary->octal\n4.octal->binary\n5.decimal->octal\n6.octal->decimal\n";
    cin>>opt;
    switch(opt){
        case 1:{
            int x,dec=0,base=1;
            cin>>x;
            while(x!=0){
                int t=x%10;
                x/=10;
                dec+=t*base;
                base*=2;
            }
            cout<<dec<<endl;
            break;
        }
        case 2:{
            int n;
            cin>>n;
            vector<int> arr;
            while(n>0){
                int t=n%2;
                arr.push_back(t);
                n/=2;
            }
            reverse(arr.begin(),arr.end());
            for(int x:arr){
                cout<<x;
            }
            break;
        }
        case 3:{
            //binary to octal
                int x;
                cin>>x;
                vector<int> arr;
                while(x!=0){
                    int t=x%10;
                    arr.push_back(t);
                    x/=10;
                }
            break;
        }
        case 4:{
            //octal->binary
            int x;
            cin>>x;
            vector<int> arr;
            while(x!=0){
                int t=x%10;
                arr.push_back(t);
                x/=10;
            }
             reverse(arr.begin(),arr.end());
             for(int x:arr){
                cout<<x;
            }
            break;}
        case 5:{
            //decimal to octal
            int n;
            cin>>n;
            vector<int> arr;
            while(n>0){
                int t=n%8;
                arr.push_back(t);
                n/=8;
            }
            reverse(arr.begin(),arr.end());
            for(int x:arr){
                cout<<x;
            }
            break;}
        case 6:{
            //octal to decimal
            int x;
            cin>>x;
            int dec=0,base=1;
            while(x!=0){
                int t=x%10;
                x/=10;
                dec+=t*base;
                base*=8;
            }
            cout<<dec<<endl;
            break;}
        default:break;
    }
}