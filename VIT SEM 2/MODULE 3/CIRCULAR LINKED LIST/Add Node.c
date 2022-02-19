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

void AddNode(struct node* head, int data, int index){
    struct node* newNode = getNode(data);
    struct node* temp = head;
    for(int i=0;i<index-1;i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return ;
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
    AddNode(head,3,2);  // insert ELEMENTS 1 at index 2
    display(head);
}
