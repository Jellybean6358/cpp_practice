#include<iostream>
using namespace std;

class Vault{
    // int x;
    // int *s1=new int(x); // default constructor allocates memory for s1
    int *secretCode;// ptr member
    public:
        Vault(int code){//allocating memory in constructor
            secretCode=new int(code);
            cout<<"Vault created, m allocated"<<endl;
        }
        Vault(const Vault &BVault){//copy constructor for deep copy
            secretCode=new int(*BVault.secretCode);
            cout<<"Deep Copy"<<endl;
        }
        ~Vault(){//destructor to free memory
            delete secretCode;
            cout<<"Freed memory"<<endl;
        }
        void showcode(){
            cout<<"code: "<<*secretCode<<endl;
        }
};
int main(){
    Vault v1(1234);
    Vault v2(v1);
    v1.showcode();
    v2.showcode();
    return 0;
}