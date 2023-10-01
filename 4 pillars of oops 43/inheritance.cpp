#include<iostream>
#include<string.h>
using namespace std;
class A {
    float d;
    public:
    int a;
    void modify(int i){
        a = i;
    }
    void getA(){
        cout<<a;
    }
};
class B : public A{
    int a = 15;
    public:
    void print(){
        cout<<a;
    }
};
class papa{
    int age;
    int height;
    public:
    string name;
    void print(){
        cout<<"inheritance"<<endl;
    }
    protected:
    char colour;
};
class beti : protected papa{
    void set(){
        name = "mohini";
    }
};
class nati : public beti{
    // accessible
    void set(){
        name = "mohini";
    }
    void setcolor(char c){
        colour = c;
    }
};
class beta : public papa{
    public:
    // age is private member in papa so inaccessible in beta
    // void setage(int age){
    //     this-> age = age;
    // }
    int weight;
    void setcolor(char c){
        colour = c;
    }
    char getcolor(){
        return colour;
    }
};
class beta2 : private papa{
    public:
    void setter( string nam , char color){
        name = nam;
        colour = color;
    }
    string getname(){
        return name;
    }
    char getcolor(){
        return colour;
    }
};
class pota : public beta2{
    // inaccessible
    // void set(){
    //     name = "mohini";
    // }
    // void setcolor(char c){
    //     colour = c;
    // }
};




int main(){




    B b;
    b.modify(10);
    b.print();
    b.getA();
    cout<<"hey! i am here"<<endl;


    cout<<"private mode -->"<<endl<<endl;;
    beta2 tanish;
    tanish.setter("tanisha", 'k');
    cout<<"name = "<<tanish.getname()<<endl;
    cout<<"colour = "<<tanish.getcolor()<<endl<<endl;


    cout<<"public mode --> "<<endl<<endl;;
    beta tajesh;
    tajesh.name = "bhvya";
    tajesh.weight =30;
    cout<<"age = "<<tajesh.name<<endl;
    cout<<"weight = "<<tajesh.weight<<endl;
    tajesh.setcolor('k');
    cout<<"color = "<<tajesh.getcolor()<<endl;
    tajesh.print();
}