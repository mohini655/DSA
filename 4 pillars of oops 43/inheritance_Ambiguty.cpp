#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void print(){
        cout<<"A class"<<endl;
    }
};
class B{
    int b;
    public:
    void print(){
        cout<<"B class"<<endl;
    }
};
class C : public A, public B{
    public:
    void print(){
        cout<<"child class"<<endl;
    }
};
int main(){
    C obj;
    obj.print();
    // scope resolution operater
    obj.A :: print();
}