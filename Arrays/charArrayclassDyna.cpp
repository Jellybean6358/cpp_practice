#include<iostream>
#include<cstring>
using namespace std;

class Product{
    int product_id;
    char *name;
    public:
        Product():product_id(0),name(nullptr){} //i used nullptr so that the pointer doesn't change into dangling pointer or points to some random memory
        void setter(int piD, const char *pName){
            product_id=piD;
            name=new char[strlen(pName)+1]; //refered learn cpp website as this will allocate exact memory for the received string 
            strcpy(name,pName);
        }
        void display() {
            if(name){
                cout<<product_id<<" : "<<name<<endl;
            }
        }
        ~Product(){
            delete[] name;
        }
};

int main(){
    int x;
    cout<<"no.of product: ";
    cin>>x;

    Product* namesheaparray=new Product[x];//heap array
    for(int i=0;i<x;i++){
        int temp_id;
        char temp_name[100];

        cout<<"Enter product ID: ";
        cin>>temp_id;
        cout<<endl;
        cout<<"Enter product name: ";
        cin>>ws; //whitespace needed for getline but not for cin as it is automatically skip WS
        cin.getline(temp_name, 100);//even though getting dynamic, names will not touch 100, so assumed here
        namesheaparray[i].setter(temp_id,temp_name);
        cout<<endl;
    }
    cout<<"Products: \n";
    for(int i=0;i<x;i++){
        namesheaparray[i].display();
    }
    delete[] namesheaparray;
}