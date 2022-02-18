#include<iostream>
using namespace std;
class Node{
    public: 
        int data;
        Node *next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
    
};

Node* takeInput(){
    int x;
    cin>>x;
    Node *head = NULL;
    while(x!=-1){
        Node *newnode = new Node(x);
        Node *tail;
        if(head==NULL){
            head = newnode;
            tail = head;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
        
        
        cin>>x;
    }
    return head;
    
}
void print(Node *head){
    while(head != NULL){
        cout<<head -> data<<" ";
        head = head -> next;
    }
}

void addNode(int data, Node *head, int i){
    Node *newnode = new Node(data);
    Node *temp = head;
    for(int j=0;j<i-1;j++){
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

int main(){
    Node *head = takeInput();
    print(head);
    addNode(30,head,2);
    print(head);
}
