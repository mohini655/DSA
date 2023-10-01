#include<iostream>
using namespace std;
// Run  time polimorphism 
class G{
    public:
    void print(){
        cout<<"mai parent class hu"<<endl;
    }
};
class g : public G{
    public:
    void print(){
        cout<<"mai child class hu"<<endl;
    }
};




// compile time polimorphism
class A{
    public:
    // function overloading - a funtion named hello has many forms;
    void hello(string name){
        cout<<"Hello "<<name<<endl;
    }
    void hello(){
        cout<<"Hello mohini lodhi"<<endl;
    }
    int hello(int n){
        cout<<"hello mohini"<<endl;
        return n;
    }
    void hello(string name, int n){
        cout<<"hello "<<name<<endl;
    }
    // void hello(string name, int n, int g = 9){
    //     cout<<"hello"<<endl;
    // }
};

class B{
    // operater overloading
    int a;
    public:
    B (int v){
        a = v;
    }
    int add (B &obj){
        return this-> a + obj.a;
    }

    int operator+ (B &obj){
        return this-> a - obj.a;
    }
};
int main(){
    // function overriding
    g obj;
    obj.print();
    obj.G :: print();




    // operator overloading
    B obj1(5);
    B obj2(3);
    cout<<obj1.add(obj2)<<endl;
    cout<<obj1 + obj2<<endl;



    // function overloading
    A hii;
    hii.hello();
    hii.hello("mohini");
    hii.hello("mohini lodhi", 4);
    cout<<hii.hello(7)<<endl;
}