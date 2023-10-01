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

void insertATtail(Node * &tail, int data){
    Node *temp = new Node(data);
    tail -> ptr = temp;
    tail = temp;
}


void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> value<<"  ";
        temp = temp -> ptr;
    }
}

void deletion(Node* &head , int pos, Node* tail){
    if(pos == 1){
        Node *temp = head;
        head =  head->ptr;
        delete temp;
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < pos-1){
        temp = temp -> ptr;
        cnt++;
    }
    Node *curr = temp->ptr;
    temp-> ptr = curr->ptr;
    if(temp-> ptr == NULL){
        tail = temp;
    }
    delete curr;
}
int main(){
    Node* head = new Node(4);
    Node *tail = head;
    insertATtail(tail, 5);
    insertATtail(tail, 8);
    insertATtail(tail, 3);
    insertATtail(tail, 9);
    print(head);
    cout<<endl;
    deletion(head, 5 , tail);
    print(head);
    cout<<"head "<<head-> value<<endl;
    cout<<"tail "<<head-> value<<endl;
    cout<<endl;
}