#include<stdio.h>
int NonBinRec(int n)
{
 	int count = 1;
 	while (n>1)
 	{
 	  count = count+1;
 	  n = n/2;
	}
	return count;
}
int main(){
   printf("Program to determine the number of bits to represent a given decimal number in binary form using non recursion \n");
   printf("Vaasu 21MIM10035 Bisht \n");   
   
   int Number, bits;
   printf("Enter the Decimal Number: ");
   scanf("%d",&Number);
   bits = NonBinRec(Number);
   printf("\n%d bits are required to represent the decimal number %d in binary form", bits,Number);
}
 

