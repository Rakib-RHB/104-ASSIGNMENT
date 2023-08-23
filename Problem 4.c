
/*Write a C function that calculates the sum of
digits of a given positive integer n. The function
should take n as an input and return the sum of its digits.*/





#include <stdio.h>

int sum(int n)
{
    int sum = 0;

    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }

    return sum;
}

int main()
{
    int n, x;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    x= sum(n);
    printf("Sum of digits of %d is %d.\n", n, x);

    return 0;
}
