#include<stdio.h>

int UniqueElements(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    printf("Program to find Largest element in the given Array\n");
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
    int flag = UniqueElements(arr,n);
    if(flag==1){
        printf("\nThe elements in given array are unique");
    }
    else{
        printf("\nThe elements in given array are not unique");
    }
}
