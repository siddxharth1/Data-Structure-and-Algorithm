#include<iostream>
using namespace std;

int BinarySearch(int arr[],int l,int h,int key){
    
    while(l<=h){
    
    
    int mid = (l+h)/2;
    if(arr[mid] == key){
        return mid;
    }
    else if(arr[mid]>key){
        BinarySearch(arr,0,mid-1,key);
    }
    else if(arr[mid]<key){
        BinarySearch(arr,mid+1,h,key);
    }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<BinarySearch(arr,0,n,key);
}
