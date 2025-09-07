#include <stdio.h>
int main()
{
    printf("Welcome to the Prime Number Checker!\n");
    int primecheck;
    int isprime = 0;
    printf("\nEnter number to check prime: ");
    scanf("%d", &primecheck);
    if(primecheck!=1){
    for (int i = 2; i < primecheck; i++)
    {
        if (primecheck % i == 0)
        {
            isprime = 1;
        }
    }
        if (isprime) //checks the 'if' condition is "TRUE"
        {
            printf("%d is not prime\n", primecheck);
        }
        else
        {
            printf("%d is prime\n", primecheck);
        }
}
else{
    printf("numbers less than 1 are not prime\n");
}
printf("\nThank You for using the Prime Number Checker\nMade by Shantanu");
    return 0;
}
