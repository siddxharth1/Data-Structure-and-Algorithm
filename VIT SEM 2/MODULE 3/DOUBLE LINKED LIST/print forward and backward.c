#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node* takeInput(int n){
    int data;
    struct node *head = NULL;
    struct node *tail = NULL;
    
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        struct node* newNode = malloc(sizeof(struct node));
        newNode->next = NULL;
        newNode->prev = NULL;
        newNode->data = data;
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            struct node *temp = tail;
            tail->next = newNode;
            tail = newNode;
            tail->prev = temp;
        }
    }
    return head;
}
struct node* getTail(struct node *head){
    struct node *tail;
    while(head!=NULL){
        tail = head;
        head = head->next;
    }
    return tail;
}


void print_forward(struct node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head = head->next;
    }
    printf("\n");
}
void print_backward(struct node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head = head->prev;
    }
    printf("\n");
}

int main(){
    int n= 5;
    struct node *head =  takeInput(n);
    /*printf("%d ",head->data);
    printf("%d",head->next->data);*/
    print_forward(head);
    struct node *tail = getTail(head);
    //printf("%d",tail->data);
    print_backward(tail);
}
