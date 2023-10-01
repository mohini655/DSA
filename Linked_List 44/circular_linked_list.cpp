#include<iostream>
using namespace std;
class Node{
    public:
    int value;
    Node*next;
    Node(int value){
        this-> value = value;
        this-> next = NULL;
    }
    ~Node(){
        int value = this-> value;
        if(this-> next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void insertNode(Node* &tail, int key, int data){
    // empty list
    if(tail == NULL){
        Node* temp = new Node(data);
        tail = temp;
        temp-> next = temp;
        return;
    }

    // generic case
    Node* temp = tail;
    while(temp -> value != key){
        temp = temp-> next;
    }
    Node* curr = new Node(data);
    if(temp == tail){
        tail = curr;
    }
    curr-> next = temp-> next;
    temp-> next = curr;

}

void deletion(Node* &tail, int data){
    Node* temp = tail;
    while(temp -> next ->value != data){
        temp = temp->next;
    }
    if(tail -> value == data){
        // tail = temp;
        tail = tail -> next;
    }
    Node* curr = temp->next;
    if(curr == temp){
        tail = NULL;
    }
    temp -> next = curr-> next;
    curr-> next = NULL;
    delete curr;

}

void print(Node* &tail){
    Node* temp = tail;
    do{
        cout<<temp -> value<<"  ";
        temp = temp-> next;
    }
    while(temp != tail);
    cout<<endl;
}
int main(){
    Node* tail = NULL;
    insertNode(tail, 7, 9);
    insertNode(tail, 9, 5);
    insertNode(tail, 5, 8);
    insertNode(tail, 8, 4);
    insertNode(tail, 5, 0);
    insertNode(tail, 8, 2);
    print(tail);
    deletion(tail, 4);
    print(tail);
    deletion(tail, 8);
    print(tail);

}