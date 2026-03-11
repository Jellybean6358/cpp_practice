#include<iostream>
#include<string>
#include <cstring>
using namespace std;
class String{
    char *ch;
    unsigned int size;
    public:
        String(const char *str){
            size=strlen(str);
            ch=new char[size+1];
            memcpy(ch,str,size);
        }
        String(const String& other):size(other.size){
            ch=new char[size+1];
            cout<<"Copied through deep copy"<<endl;
            memcpy(ch,other.ch,size+1);
        }
        ~String(){
            delete ch;
        }
        char& operator[](unsigned int ind){
            return ch[ind];
        }
        friend ostream& operator<<(ostream& stream, const String &str);

};
ostream& operator<<(ostream& stream,const String &str){
    stream<<str.ch;
    return stream;
}
void display(const String& str){
    cout<<str<<endl;
}
int main(){
    String str="tracker";
    String str2=str;
    str2[4]='l';
    display(str);
    display(str2);
    // cout<<str<<endl;
    // cout<<str2;
}