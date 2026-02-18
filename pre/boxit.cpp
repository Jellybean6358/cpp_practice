#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Box{
  long long l,b,h;
  
  public:
    Box():l(0),b(0),h(0){}  
    Box(const long long x, const long long y, const long long z):l(x),b(y),h(z){}
    Box(const Box &B):l(B.getLength()), b(B.getBreadth()), h(B.getHeight()) {}
    long long getLength() const{
        return l;
    }
    long long getBreadth()const {
        return b;
    }
    long long getHeight() const{
        return h;
    }
    bool operator<(const Box &B){
        return ((l<B.l)||((b<B.b)&&(l==B.l))||((h<B.h)&&(b==B.b)&&(l==B.l)));
    }
    long long CalculateVolume(){
        return static_cast<long long>(l*b*h);
    }
    friend ostream& operator<<(ostream& out,const Box& B);
};
ostream& operator<<(ostream& out,const Box& B){
    out<<B.getLength()<<" "<<B.getBreadth()<<" "<<B.getHeight()<<endl;
    return out;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    Box curr;
    for(int i=1;i<=n;i++){
        int query;
        cin>>query;
        switch (query){
            case 1:
                cout<<curr;
                break;

            case 2:{
                int l,b,h;
                cin>>l>>b>>h;
                curr=Box(l,b,h);
                cout<<curr;
                break;}
            case 3:{
                int l,b,h;
                cin>>l>>b>>h;
                cout<<((Box(l,b,h)<curr)?"Less":"Great")<<endl;
                break;}
            case 4:
                cout<<curr.CalculateVolume()<<endl;
                break;
            case 5:
                curr=Box(curr);
                cout<<curr;
                break;
        
            default:
                break;
        }
    }
    return 0;
}
