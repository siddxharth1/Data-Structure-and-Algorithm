#include<iostream>
#include<climits>
using namespace std;

class StackUsingArray{
    int *data;
    int nextIndex;
    int totalSize;
    public:
    
    StackUsingArray(int totalSize){
        data = new int[totalSize];
        nextIndex = 0;
        this->totalSize = totalSize;
    }
    // return number of elements
    int size(){
        return nextIndex; 
    }

    bool isEmpty(){
        // if(nextIndex == 0){
        //     return true;
        // }
        // return false;
        return nextIndex == 0;
    }


    // insert element
    void push(int element){
        if(nextIndex == totalSize){
            cout<<"STACK IS FULL"<<endl;
            return ;
        }
        data[nextIndex] = element;
        nextIndex++;
        return;
    }

    int pop(){
        if(isEmpty()){
            cout<<"STACK IS EMPTY"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    int top(){
        if(isEmpty()){
            cout<<"STACK IS EMPTY"<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};

int main(){
    StackUsingArray s(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.size()<<endl;
}
