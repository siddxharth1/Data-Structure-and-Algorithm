#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* takeInput(){
    int data;
    struct node *head = NULL;
    struct node *tail = NULL;
    scanf("%d",&data);
    while(data!=-1){
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
        scanf("%d",&data);
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
    struct node *head =  takeInput();
    /*printf("%d ",head->data);
    printf("%d",head->next->data);*/
    print(head);
}
