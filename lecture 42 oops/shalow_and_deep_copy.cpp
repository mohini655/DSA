#include<iostream>
#include<string.h>
using namespace std;
class student{
    public:
    char *name = new char[100];
    int marks;
    char grade;
    student(){
        // name = new char[100];
    }
    void setter(int marks, char grade, char name[]){
        strcpy(this->name , name);
        this->marks = marks;
        this->grade = grade;
    }
    void print(){
        cout<<"name is "<<this->name<<endl;
        cout<<"marks are "<<this->marks<<endl;
        cout<<"grade is "<<this->grade<<endl;
    }
    // copy constructer for Deep copy
    student(student &obj){
        char *ch = new char[strlen(obj.name) + 1];
        strcpy(ch, obj.name);
        this->name = ch;
        this->marks = obj.marks;
        this->grade = obj.grade;
    }
};

int main(){
    student s1;
    char name[] = "mohini";
    s1.setter(90, 'A', name);
    s1.print();

    cout<<"s2 ->"<<endl;
    student s2(s1);
    s2.print();

    // this is shallow copy in default copy constructure in which 
    //      1st object is pass by reference so address is copied of elements in new object 
    // cout<<"Shallow copy"<<endl;
    // s1.name[0] = 's';
    // s1.print();
    // cout<<"s2 ->"<<endl;
    // s2.print();

    cout<<"Deep copy"<<endl;
    student s3(s1);
    s1.name[0] = 's';
    s1.print();
    cout<<"s3 -> "<<endl;
    s3.print();
    // Deep copy is done by user made copy constructer

    // copy asignment operater
    student s4;
    char nm[] = "tanish";
    s4.setter(58, 'g' , nm);
    s4.print();
    s1 = s4;
    cout<<"s1 after copy asignment operater"<<endl;
    s1.print();
}