#include<iostream>
using namespace std;

class Point{
    public:
        int a=100;
        int *z=new int(a);//
        int x,y;
        Point(int x=0,int y=0):x(x),y(y){}
        Point operator+(const Point &other){
            Point res;
            res.x=this->x+other.x;
            res.y=this->y+other.y;
            return res;

        }
        void display(){
            cout<<x<<" "<<y<<" "<<*z<<endl;
        }
        ~Point(){
            delete z;
            cout<<"Freed memory"<<endl;
        }

};

int main(){
    Point p1(10,5);
    Point p2(1,2);
    Point p3=p1+p2;
    p3.display();
}