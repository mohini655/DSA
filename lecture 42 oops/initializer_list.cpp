#include<iostream>
using namespace std;
class ruby{
    int value;
    public:

    static char element;

    static void set_element(char e){
        element = e;
    }

    static char get_element(){
        return element;
    }
    ruby(int value):value(value){}
    // ruby(int value){
    //     this-> value = value;
    // }
    int getvalue(){
        return value;
    }
};
char ruby :: element = 'C';
int main(){
    ruby h(4);
    cout<<"value is "<<h.getvalue()<<endl;

    /* we have to/should use initializer list in the following cases
    - initialization of constant data members
    - initialization of reference data members
    */
    // Static member
    // - it belongs to class not object
    // - Scope resolution operater = "::" used to initialize static data member
    cout<<"this is static memder "<<ruby :: element<<endl;

    // Static function
    // - don't need to create object
    // - no - "this" keyword
    // - access only static members
    ruby :: set_element('k');
    cout<<"setted element "<<ruby :: element<<endl;
    cout<<"getted element "<<ruby :: get_element()<<endl;
}