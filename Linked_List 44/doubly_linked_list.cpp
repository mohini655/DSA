#include<iostream>
using namespace std;
class Node{
    public:
    Node *prev;
    int data;
    Node *next;
    Node(int d){
        data = d;
        prev = NULL;
        next = NULL;
    }
    // ~Node(){
    //     if(this-> next != NULL){
    //         delete next;
    //         next == NULL;
    //     }
    //     cout<<"deleted"<<endl;
    // }
};

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp-> data<<"  ";
        temp = temp->next;
    }cout<<endl;
}

int getlen(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAThead(Node* &head, int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp;
        return;
    }
    Node*temp = new Node(data);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}

void insertATtail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

void inserATmiddle(Node* &tail, Node* &head , int pos, int data){
    if(pos == 1){
        insertAThead(head, data);
        return;
    }


    Node* temp = head;
    int cnt = 1;
    while(cnt< pos-1){
        temp = temp-> next;
        cnt++;
    }

    if(temp->next == NULL){
        insertATtail(tail, data);
        return;
    }

    Node * newnode = new Node(data);
    newnode -> next = temp -> next;
    temp ->next -> prev = newnode;
    newnode-> prev = temp;
    temp-> next = newnode;

}


void deletion(Node* &head , int pos, Node * &tail){
    if(pos == 1){
        Node *temp = head;
        head -> next -> prev = NULL;
        head =  head->next;
        delete temp;
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while(cnt < pos-1){
        temp = temp -> next;
        cnt++;
    }
    Node *curr = temp->next;
    temp-> next = curr->next;
    if(curr-> next == NULL){
        tail = temp;
    }
    else{
        curr-> next -> prev = temp;
    }
    curr-> prev = NULL;
    delete curr;
}

int main(){
    Node* node = new Node(4);
    Node* head = node;
    print(head);
    cout<<getlen(head)<<endl;
    insertAThead(head, 8);
    print(head);
    cout<<getlen(head)<<endl;
    Node *tail = node;
    insertATtail(tail, 9);
    insertATtail(tail, 3);
    insertATtail(tail, 5);
    print(head);
    cout<<"tail "<<tail -> data<<endl;

    inserATmiddle(tail , head, 1, 23);
    print(head);
    cout<<"tail "<<tail -> data<<endl;

    deletion(head, 3, tail);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail -> data<<endl;

    Node * heed = NULL;
    insertAThead(heed, 6);
    print(heed);
}