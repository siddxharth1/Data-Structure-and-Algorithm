#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* takeInput(int n){
    int data;
    struct node *head = NULL;
    struct node *tail = NULL;
    
    for(int i=0;i<n;i++){
        scanf("%d",&data);
        struct node* newNode = malloc(sizeof(struct node));
        if(head == NULL){
            newNode->data=data;
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            newNode->data = data;
            tail = newNode;
        }
    }
    return head;
}
void insertNode(struct node *head, int i, int data){
    int count = 0;
    struct node* newNode = malloc(sizeof(struct node));
    struct node *temp = head;
    while(temp!=NULL && count<i-1){
        temp = temp->next;
        count++;
    }
    if(temp!=NULL){
        struct node *a = temp->next;
        temp->next = newNode;
        newNode->next = a;
        newNode->data = data;
    }
} 
void print(struct node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head = head->next;
    }
    
}
   

int main(){
    int n= 5;
    struct node *head =  takeInput(n);
    /*printf("%d ",head->data);
    printf("%d",head->next->data);*/
    insertNode(head,1,2);
    print(head);
}
