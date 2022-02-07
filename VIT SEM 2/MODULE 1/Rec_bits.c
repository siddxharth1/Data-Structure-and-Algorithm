#include<stdio.h>

int BinRec(int n){
 	if (n==1 || n==0){
 	   return 1;
	}
	return BinRec(n/2)+1;

 }


int main()
 {
   printf("Program to determine the number of bits to represent a given decimal number in binary form using Recursion \n");
   printf("Vaasu 21MIM10035 Bisht \n");   
   
   int Number, bits;
   printf("Enter the Decimal Number: ");
   scanf("%d",&Number);
   bits = BinRec(Number);
   printf("\n%d bits are required to represent the decimal number %d in binary form", bits,Number);
 }
 

