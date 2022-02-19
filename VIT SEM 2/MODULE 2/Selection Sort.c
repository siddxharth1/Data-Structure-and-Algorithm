#include <stdio.h>
#include<stdlib.h>
//non - decreasing
void SelectionSort(int a[],int n){
    int min;
    for(int i=0;i<=n-2;i++){
        min=i;
        for(int j=i+1;j<=n-1;j++){
            if(a[j]<a[min]){
                min = j;
                int temp = a[min];
                a[min] = a[i];
                a[i] = temp;
            }
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
    SelectionSort(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}


/*decreasing
void SelectionSort(int a[],int n){
    int max;
    for(int i=0;i<=n-2;i++){
        max=i;
        for(int j=i+1;j<=n-1;j++){
            if(a[j]>a[max]){
                max = j;
                int temp = a[max];
                a[max] = a[i];
                a[i] = temp;
            }
        }
    }
}
*/
