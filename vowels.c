# nethu
#include <stdio.h>
int main()
{
    char c;
    int A,B;

    printf("Enter an alphabet: ");
    scanf("%c",&c);
    A = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    B = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (A || B)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
