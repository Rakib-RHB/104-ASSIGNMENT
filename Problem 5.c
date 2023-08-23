/*Write a C function that determines if a given character
is a vowel or a consonant. The function should take a character
 as input and return whether it's a vowel or a consonant.*/





#include <stdio.h>


char isVowel(char y)
{
    if (y == 'a' || y == 'e' || y == 'i' || y == 'o' || y == 'u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char x;

    printf("Enter a character: ");
    scanf(" %c", &x); // Note the space before %c to consume any whitespace left in the buffer

    if (isVowel(x))
    {
        printf("%c is a vowel.\n", x);
    }
    else
    {
        printf("%c is a consonant.\n", x);
    }

    return 0;
}

