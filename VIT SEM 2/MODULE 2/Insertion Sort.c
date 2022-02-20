#include <stdio.h>
#include<stdlib.h>

void InsertionSort(int a[],int n){
    for(int j=1;j<=n-1;j++){              
        int current = a[j];
        int i = j-1;
        while(a[i]<current && i>=0){
            a[i+1] = a[i];
            i = i - 1;
        }
        a[i+1] = current;
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
