#include <stdio.h>

int main()
{
    int caractere;
    printf("Caractere\tCódigo ASCII\n");
    for(caractere = 32; caractere <= 127; caractere ++)
    {
        printf("        %c\t%d\n ", caractere, caractere);
    }

    return 0;
}