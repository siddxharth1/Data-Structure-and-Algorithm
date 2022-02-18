#include <stdio.h>
#include<stdlib.h>

// Declaring Node Data Type
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

// Taking input
struct node* takeInput(int n){
    struct node *head = NULL;
    struct node *tail = NULL;
    int data;
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        struct node* newNode = getNode(data);
        if(head == NULL){
            head = newNode;
            tail = head;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
}

void print(struct node *head){
    printf("Linked list : ");
    while(head!=NULL){
        printf("%d->",head->data);
        head = head->next;
    }
    printf("NULL");
    
}
   
int main(){
    int n;
    printf("NUMBER OF ELEMENTS IN LINKED LIST: ");
    scanf("%d",&n);
    struct node *head =  takeInput(n);
    print(head);
}
