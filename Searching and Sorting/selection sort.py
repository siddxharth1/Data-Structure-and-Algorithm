#include<iostream>
using namespace std;

void SelectionSort(int a[],int n){
    
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
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
    
    SelectionSort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}



