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
    cout<<"1.charoccurences&len of char array\n2.Compare two character-array,Reverse character-array,Concatenate two character-array\n3.copy char array to char array\n4.Find Number of vowels, consonants, digits, spaces in character-array\n";
    cout<<"5.";
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
            cout<<"\n";
            strptr+=strarray;
            cout<<strptr<<endl;
            //delete ch;
            break;
        }
        case 3:{
            char *ch1=new char[3];
            cin>>ch1[0];cin>>ch1[1];ch1[2]='\0';
            cin.ignore(1000,'\n');

            char *ch=new char[7];
            cin.getline(ch,7);
            cout<<"\n";
            memcpy(ch,ch1,3);
            //cout<<ch<<endl;
            for(int i=0;i<7;i++){
                cout<<ch[i];
            }
            delete[] ch1;
            delete[] ch;

        }
        case 4:{
            //char *ch=new char[10];
            char ch[]="a 1bi";
            int vc=0,cc=0,dc=0,spc=0;
            // cin.ignore(1000,'\n');
            // cin.getline(ch,10);
            cout<<"\n";
            for(int i=0;i<sizeof(ch);i++){
                char cur=ch[i];
                if(cur>='a'&&cur<='z'||cur>='A'&&cur<='Z'){
                    if(cur=='a'||cur=='e'||cur=='i'||cur=='o'||cur=='u'){
                        vc++;
                    }
                    else{
                        cc++;
                    }
                    
                }
                else if(ch[i]>='0'&&ch[i]<='9'){
                    dc++;
                }
                else if(ch[i]==' '){
                    spc++;
                }
            }
            cout<<vc<<"vc "<<cc<<"cc "<<dc<<"dc "<<spc<<"spc"<<endl;
        }
        default:break;
    }

}