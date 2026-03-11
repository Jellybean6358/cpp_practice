#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Robot{
    string name;
    int batteryStatus;
    public:
        Robot(string Rname, int Rbatterypercent){
            name=Rname;
            batteryStatus=Rbatterypercent;
        }
};
int main(){
    Robot obj1( "Alpha" , 89 );
    Robot obj2( "Beta" , 10 );
    
}