#include<iostream>
#include<vector>
using namespace std;

class Pant{
    public:
    string name;
    vector<int> sizes;
    Pant(string name, vector<int> sizes): name(name), sizes(sizes){}

};
int main(){
    vector<int> j_sizes={30,40};
    Pant jeans("Jeans",j_sizes);

    Pant deep_copy=jeans;
    deep_copy.sizes.push_back(30);
    cout<<"Deep Copy: ";
    for(int size:deep_copy.sizes){
        cout<<size<<" ";
    }
    cout<<endl<<"Original: ";
    for(int size:jeans.sizes){
        cout<<size<<" ";
    }
    cout<<endl;

    //shallow copy
    Pant *shallow_copy=&jeans;
    shallow_copy->sizes.push_back(70);
    cout<<"Shallow Copy: ";
    for(int size:shallow_copy->sizes){
        cout<<size<<" ";
    }
    cout<<endl;
    





}