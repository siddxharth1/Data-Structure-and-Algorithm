#include <stdio.h>
int FactorialInterative(int n){
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
        
    }
    return fact;
}

int main()
{
    printf("Factorial (non-recursive) interative function \n");
    printf("Vaasu 21MIM10035 Bisht \n");
    int number, factorial;
    printf("ENTER NUMBER: ");
    scanf("%d",&number);
    factorial = FactorialInterative(number);
    printf("Factorial of %d is %d",number,factorial);
}
