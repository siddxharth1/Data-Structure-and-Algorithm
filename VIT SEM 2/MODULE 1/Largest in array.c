#include<stdio.h>

int MaxElement (int arr[], int n){
    int ans = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>ans){
            ans = arr[i];
        }
    }
    return ans;
}

int main(){
    printf("Program to find Largest element in the given Array \n");
    printf("Vaasu 21MIM10035 Bisht \n");
    int n;
    printf("Enter the Array Size: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the array element number %d:- ",i+1);
        scanf("%d",&arr[i]);
        
    }
    printf("Elements in array:- ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    int max = MaxElement(arr,n);
    
    printf("\nThe largest element in array is %d",max);
    
}
 
 
