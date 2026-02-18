#include<iostream>
using namespace std;
#define a 0

#if a==0
#define LOG(x) cout<<x<<endl;
#else
#define LOG(x)
#endif
int main(){
    LOG("Hi");
}