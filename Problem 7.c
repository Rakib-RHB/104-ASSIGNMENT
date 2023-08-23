/*Write a C function that prints the first n even numbers.
 The function should take n as an input and print the first
 n even numbers.*/






#include <stdio.h>
void EvenNumbers(int n) {
    int i;
    for ( i = 1; i <= n; i++) {
        printf("%d ", 2 * i); // Multiply i by 2 to get even numbers
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

   EvenNumbers(n);

    return 0;
}

