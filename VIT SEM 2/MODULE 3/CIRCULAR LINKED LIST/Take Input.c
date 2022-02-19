#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

// Assigning values inside node
struct node* getNode(int data){
    struct node* newNode = malloc(sizeof(struct node)); // allocating dynamic memory
    newNode->data = data;  // Assigning data value to data of current node
    newNode->next = NULL; // Assigning NULL to next of current node
    return newNode;
}

struct node* InsertAtHead(struct node* head, int data){
    
    struct node* newNode = getNode(data);
    
    /*if(head==NULL){
        newNode->next = newNode;
        head=newNode;
        return;
    }*/
    
    struct node* temp = head;
    
    while(temp->next!=head){
        temp=temp->next;
    }
    
    temp->next = newNode;
    newNode->next = head;
    head = newNode;
    return head;
}

void InsertAtTail(struct node* head, int data){
    
    if(head == NULL){
        InsertAtHead(head,data);
        return;
    }
    
    struct node* newNode = getNode(data);
    struct node* temp = head;
    
    while(temp->next!=head){
        temp=temp->next;
    }
    
    temp->next = newNode;
    newNode->next = head; 
    return;
 }
 
void display(struct node* head){
    struct node* temp = head;
    do{
        printf("%d->",temp->data);
        temp=temp->next;
    }while(temp!=head);
    printf("%d \n",temp->data);
}

struct node* takeInput(int n){
    struct node *head = NULL;
    struct node *tail = NULL;
    int data;
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        struct node* newNode = getNode(data);
        if(head==NULL){
            head = newNode;
            tail = head;
            newNode->next = head;
        }
        else{
            tail->next = newNode;
            newNode->next = head;
            tail = newNode;
        }
    }
    return head;
}
 
int main(){
    int n;
    printf("NUMBER OF ELEMENTS IN LINKED LIST: ");
    scanf("%d",&n);
    struct node *head =  takeInput(n);
    display(head);
    InsertAtTail(head,6);
    display(head);
    head = InsertAtHead(head,0);
    display(head);
}
