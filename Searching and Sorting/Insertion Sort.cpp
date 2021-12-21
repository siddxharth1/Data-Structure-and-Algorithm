#include<iostream>
using namespace std;

void InsertionSort(int a[],int n){
    for(int i=1;i<n;i++){              
        int current = a[i];
        int j = i-1;
        while(a[j]>current && j>=0){
            a[j+1] = a[j];
            a[j] = current;
            j = j - 1;
        }
    }
} 

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    InsertionSort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}




