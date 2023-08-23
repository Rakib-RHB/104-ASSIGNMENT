/*Write a C function that calculates
the factorial of a given positive
integer n. The function
should take n as an argument
 and return the factorial.*/





#include <stdio.h>

int factorial(int n)
{
    int i, result ;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        result = 1;
        for ( i = 2; i <= n; i++)
        {
            result *= i;
        }
        return result;
    }
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative integers.\n");
    }
    else
    {
        int  result = factorial(n);
        printf("Factorial of %d! is %d \n\n", n, result);
    }

    return 0;
}


