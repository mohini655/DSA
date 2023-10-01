#include<iostream>
#include<string.h>
using namespace std;
class empty{
    // this is empty class
    // guess its size
};


class hero{
    // properties
    // name is a private member 
    // private:
    string name = "mohini";

    public:

    int health;
    char level;

    void print(){
        cout<<name<<endl;
    }

    // constructer 
    hero(){
        cout<<"i am constructor"<<endl;
    }
};


class gamer{
    int score;
    char grade;

    public:
    
    // getter
    int getscore(){
        return score;
    }
    char getgrade(){
        return grade;
    }

    // setter
    void setscore(int s){
        score = s;
        return ;
    }
    void setgrade(char c){
        grade = c;
        return ;
    }
    // defalt constructer
    gamer(){
        // do nothing
    }
    // copy constructer 
    gamer(gamer& copi){
        this->score = copi.score;
        this->grade = copi.grade;
    }
};

class student{
    int value;
    int marks;

    public:
    student(){
        cout<<"this is a constructor of student"<<endl;
    }

    // parameterised constructer
    // "this" operater stores the adderess of the current object
    student(int value){
        cout<<"address of this keyword -> "<<this<<endl;
        this -> value = value;
    }
    student(int value,int marks){
        this -> marks = marks;
        this -> value = value;
    }
    void print(){
        cout<<this->value<<endl;
    }
    void print_marks(){
        cout<<"marks of moni "<<marks<<endl;
    }
};

int main(){
    cout<<"size of empty class = "<<sizeof(empty)<<endl;

    hero teju;
    // teju.name = "bhvya"; // this is private member
    teju.level = 'A';
    teju.health = 90;
    // cout<<"name of hero = "<<teju.name<<endl;
    cout<<"health of hero = "<<teju.health<<endl;
    cout<<"level of game = "<<teju.level<<endl;
    // this print function is also a member of hero class
    teju.print();

    // getter / setter
    gamer tajesh;
    tajesh.setgrade('A');
    tajesh.setscore(10);
    cout<<"grade is "<<tajesh.getgrade()<<endl;
    cout<<"score is "<<tajesh.getscore()<<endl;

    // dynamically memory allocation of class
    hero *tanish = new hero;
    (*tanish).health = 8;
    (*tanish).level = 'b';
    cout<<"tanish ki health "<<(*tanish).health<<endl;
    cout<<"iska level "<<tanish->level<<endl; 

    // constructer
    student mohini(9);
    cout<<"address of mohini -> "<<&mohini<<endl;
    cout<<"value of mohini"<<endl;
    mohini.print();

    student moni(50,60);
    moni.print_marks();

    // default copy constructer 
    gamer c(tajesh);
    cout<<"score of copied gamer c -> "<<c.getscore()<<endl;
    cout<<"grade of copied gamer c -> "<<c.getgrade()<<endl;

    gamer bhvya(tajesh);
    cout<<"grade is "<<bhvya.getgrade()<<endl;
    cout<<"score is "<<bhvya.getscore()<<endl;
}