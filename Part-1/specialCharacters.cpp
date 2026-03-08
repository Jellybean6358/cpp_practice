//Remove special-characters in the character-array except Alphabets.
#include<iostream>
using namespace std;
void rem(char *str){
    int wi=0;
    for(int i=0;str[i]!='\0';i++){
        if((isalnum((char)(str[i])))&&str[i]!=' '){
            str[wi]=str[i];
            wi++;
        }
    }
    str[wi]='\0';
}
int main(){
    char ch[]="Hi#, $welcomes #you#";
    cout<<ch<<endl;
    rem(ch);
    cout<<ch<<endl;
}