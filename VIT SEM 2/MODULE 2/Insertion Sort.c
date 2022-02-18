#include <stdio.h>
#include<stdlib.h>

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
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    InsertionSort(a,n);

    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
