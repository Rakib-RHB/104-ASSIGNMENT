
/*Write a C function that checks if a given positive integer
 is a prime number. The function should take an integer as
 input and return whether it is prime or not.*/

#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (isPrime(n))
    {
        printf("%d is a prime number.\n", n);
    }
    else
    {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
