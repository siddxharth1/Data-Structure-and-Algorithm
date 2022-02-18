# SINGLE LINKED LIST
- Statically Allocation
- Dynamic Allocation
- Print Linked List
- Input 1
- Input 2




```cpp
class Node{
    public: 
        int data;
        Node *next;
        
        Node(int data){
            this -> data = data;
            next = NULL;
        }
};
```

```cpp
void print(Node *head){
    while(head != NULL){
        cout<<head -> data<<" ";
        head = head -> next;
    }
}
```

```cpp
Node* takeInput(){
    int data;
    cin>>data;
    Node *head = NULL;
    Node *tail = NULL;
    while(data!=-1){
        Node *newNode = new Node(data);
        if(head==NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
           tail = newNode;
        }
        cin>>data;
    }
    return head;
    
}
```
