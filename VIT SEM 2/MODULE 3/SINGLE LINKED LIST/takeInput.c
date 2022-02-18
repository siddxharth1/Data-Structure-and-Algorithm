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
        newNode->next = NULL;
        newNode->data = data;
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    return head;
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
    print(head);
}
