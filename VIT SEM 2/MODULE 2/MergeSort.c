#include<stdio.h>


void Mergesort(int A[], int p, int r);
void Merge(int A[], int p, int q, int r);
void printArray(int A[], int n);

int main()
{
    int A[20], n, i;
    printf("\nEnter the array size : ");
    scanf("%d", &n);
    printf("\n");
    for (i=0;i<=n-1;i++)
    {
    printf("Enter element number %d: ", i+1);
	scanf("%d", &A[i]);
    }
    printf("\nThe array before sorting is : [ ");
    printArray(A, n);
    printf("]\n\n");
    
    Mergesort(A,0,n-1);
     
    printf("The array after sorting is : [ ");
    printArray(A, n); 
    printf("]\n\n");

}

//This function sort the elements in ascending order using Divide-and-Conquer based Merge sort
void Mergesort(int A[], int p, int r)
{
	int q;
	if(p<r)
	{
	q = (p+r)/2;
	Mergesort(A, p, q);
	Mergesort(A, q+1, r);
	Merge(A, p, q, r);
	}    
}

//This function merges two sorted arrays
void Merge(int A[], int p, int q, int r)
{
   int i, j, k;
   int n1 = q-p+1;
   int n2 = r-q;
   int L[n1+1], R[n2+1];
   for(i=0; i<=n1-1; i++)
   {
   	 L[i] = A[p+i];
   }
   for(j=0; j<=n2-1; j++)
   {
   	 R[j] = A[q+j+1];
   }
   L[n1]=9999;
   R[n2]=9999;
   i=0;
   j=0;
   for(k=p; k<=r; k++)
   {
   	  if(L[i]<=R[j])
   	  {
   	  	A[k]=L[i];
   	  	i = i+1;
	  }
	  else
	  {
	  	A[k]=R[j];
	  	j = j+1;
	  }
   }	
}

//This function prints the elements in an array
void printArray(int A[], int n) 
{ 
    int i; 
    for (i=0;i<=n-1;i++)
    {
	printf("%d", A[i]);
	printf(" ");
    }      
}
