
/*  (3): Write a C function to generate the Fibonacci
series up to a given term n. The function should
take n as an input and print the Fibonacci series.*/


#include <stdio.h>

void Fibonacci(int n) {
    int first = 0, second = 1, next ,i ;

    printf("Fibonacci Series up to term %d:\n", n);
    printf("%d ", first);

    for ( i = 1; i < n; i++) {
        printf("%d ", second);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    Fibonacci(n);

    return 0;
}
