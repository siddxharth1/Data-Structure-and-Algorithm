#include <stdio.h>
int FactorialRecurssive(int n){
    if(n == 0){
        return 1;
    }
    return n*FactorialRecurssive(n-1);
}

int main()
{
    printf("Factorial recursive function \n");
    printf("Vaasu 21MIM10035 Bisht \n");
    int number, factorial;
    printf("ENTER NUMBER: ");
    scanf("%d",&number);
    factorial = FactorialRecurssive(number);
    printf("Factorial of %d is %d",number,factorial);
}
