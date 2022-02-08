#include<stdio.h>
int Fibonacci(int x){
    if(x==1){
        return 0;
    }
    if(x==2){
        return 1;
    }
    return Fibonacci(x-1) + Fibonacci(x-2);
}
int main(){
    printf("Program for finding nth number in Fibonacci Series\n");
    printf("VAASU 21MIM10035 BISHT \n");
    int n;
    printf("Emter nth term ");
    scanf("%d",&n);
    printf("The %dth number is %d",n, Fibonacci(n));
}
