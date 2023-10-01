#include<iostream>
using namespace std;
class D{
    int len;
    public:
    void print(){
        cout<<"hii"<<endl;
    }
    friend int getter(D);
    void setter(int n){
         this -> len = n;
    }
};
int getter(D d){
    return d.len;
}



// this is a abstract class as its atleast one function is pure virtual
class A{
    public:
    int len;
    void print(){
        cout<<"hii"<<endl;
    }
    virtual int getlen() = 0; // this is a pure virtual function;
};
class a : public A{
    public:
    void setlen(int n){
        this-> len = n;
    }
    int getlen(){
        return this-> len;
    }

};
int main(){
    D d;
    d.setter(7);
    cout<<getter(d)<<endl;



    a obj;
    obj.setlen(6);
    cout<<obj.getlen()<<endl;
}