#include<iostream>
using namespace std;

class Node{
    public:
    int value;
    Node*ptr;
    Node(int value){
        this-> value = value;
        this-> ptr = NULL;
    }
};

void insertAThead(Node* &head , int data){
    Node * temp = new Node(data);
    temp -> ptr = head;
    head = temp;
}

void insertATtail(Node * &tail, int data){
    Node *temp = new Node(data);
    tail -> ptr = temp;
    tail = temp;
}

void insertATmiddle(Node *tail,  Node* &head , int data, int pos){
    if(pos == 1){
        insertAThead(head, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while(cnt < pos-1){
        temp = temp-> ptr;
        cnt++;
    }

    if(temp-> ptr == NULL){
        insertATtail(tail, data);
        return ;
    }


    Node *newnode = new Node(data);
    newnode -> ptr = temp-> ptr;
    temp-> ptr = newnode;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> value<<"  ";
        temp = temp -> ptr;
    }
}
int main(){
    // static initiallization
    Node node1(6);
    // cout<<node1.value<<endl;
    // cout<<node1.ptr<<endl;

    // dynamically initialization
    Node* node = new Node(10);
    // cout<<node-> value<<endl;
    // cout<<node-> ptr<<endl;

    // call insert function to make a linked list
    Node * Head = node;
    insertAThead(Head , 6);
    insertAThead(Head , 7);
    insertAThead(Head , 9);
    print(Head);
    cout<<endl;

    Node * tail = node;
    insertATtail(tail, 23);
    insertATtail(tail, 45);
    print(tail);
    cout<<endl;
    print(Head);
    cout<<endl;

    insertATmiddle(tail, Head, 43, 4);
    print(Head);
    cout<<endl;

}