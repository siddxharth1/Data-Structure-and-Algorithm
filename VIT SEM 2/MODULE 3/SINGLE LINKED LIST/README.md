```c
struct node{
    int data;
    struct node *next;
};
```

```c
void print(struct node *head){
    while(head!=NULL){
        printf("%d ",head->data);
        head = head->next;
    }   
}
```c
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
```
