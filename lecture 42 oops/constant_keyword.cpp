#include<iostream>
using namespace std;
int good(int num){
    return num+1;
}
int lose(int *num){
    return *num;
}

class demo{
    int value;
    public:
    // constructer
    demo(int value){
        this-> value = value;
    }
    void print() const{
        cout<<"this is a constant function in class"<<endl;
    }
    int getter()const{
        return this->value;
    }
    void setter(int val){
        this->value = val;
    }
};
int main(){
    // constant variables
    const int y = 8;
    const char c = 'j';
    // y = 3;
    cout<<y <<" & "<< c<<endl;

    // constant pointer variables
    int x = 9;
    char a = 'k';
    const int *ptr = &x;
    const char *pt = &a;
    x = 3;
    a = 'h';
    int f = 6;
    // *ptr = &f;
    cout<<*ptr<<"  "<<*pt<<endl;
    cout<<x<<"  "<<a<<endl;

    int *const i = &x;
    x = 7;
    cout<<*i<<"  "<<i<<endl;
    // *i = &f;
    const int j = 4;
    cout<<good(j)<<endl;
    int z = 0;
    // const int *p = &z;
    // cout<<lose(p)<<endl;
 

    demo obj(2);
    obj.print();
    const demo obj2(3);
    obj2.print();
    obj.setter(4);
    // obj2.setter(7);  // this will not work as object is of const type and member function is of non const type
    cout<<"value of non constant object -> "<<obj.getter()<<endl;
    cout<<"value of non constant object -> "<<obj2.getter()<<endl;

}