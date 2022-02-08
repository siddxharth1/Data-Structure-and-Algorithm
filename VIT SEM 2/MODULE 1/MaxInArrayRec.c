#include<stdio.h>
int max(int a, int b){
    if(a>b){
        return a;
    }
    return b;
}

int RecMaxElement (int arr[], int n){
    if(n==1){
        return arr[0];
    }
    return max(RecMaxElement (arr, n-1), arr[n-1]);
}


int main(){
    printf("Program to find Largest element in the given Array using Recusrsion\n");
    printf("VAASU 21MIM10035 BISHT\n");   
    int n;
    printf("Enter the Array Size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the array element number %d:- \n",i+1);
        scanf("%d",&arr[i]);
        
    }
    printf("Elements in array:- \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int max = RecMaxElement(arr,n);
    printf("\nThe largest element in array is %d",max);
}
 
