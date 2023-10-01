#include<iostream>
using namespace std;
class emp{
    public:
    int num;
    char c;
    ~emp(){
        cout<<"de-structer called"<<endl;
    }
};
int main(){
    emp e1;
    emp *e2 = new emp();
    /*
    destructer called when scope end of object 
    - for memory deallocation
    - not return type
    - no input parameter
    - same name of class
    - it is as similar as constructer
    - automaticaly create and called
    - can be created manuly using "~" sign
    */ 
    // de-structer called automatically called for static allocation
    // we have to manully call de-structer for dynamic allocation
    delete e2;
}