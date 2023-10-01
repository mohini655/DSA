#include<iostream>
#include<string.h>
using namespace std;
class student{
    private:
    int marks;
    int Rollno;
    string name;
    public:
    void setter(int mark, int roll , string nam){
        marks = mark;
        Rollno = roll;
        name = nam;
    }
    int getmarks(){
        return marks;
    }
    string getname(){
        return name;
    }
    int getroll(){
        return Rollno;
    }
};
int main(){
    // Encapsulation = wrapping up data members and function in a single entity called class.
    student s;
    s.setter(99, 2, "Mohini");
    cout<<"name = "<<s.getname()<<endl;
    cout<<"Roll no = "<<s.getroll()<<endl;
    cout<<"marks = "<<s.getmarks()<<endl;
    // fully Encapslation = all the data members are marked private.
    // Advantages - 
    // - data hiding (security)
    // - can be read only
    // - reusabilty
    // - unit testing
}