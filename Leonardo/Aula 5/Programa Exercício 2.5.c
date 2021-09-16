# include <stdio.h>

int main()
{
    int nmr_ramos, i, l;
    char c = 'A';

    printf("Digite o número de ramos: ");
    scanf("%d", &nmr_ramos);

    for(i = 0; i <= nmr_ramos; i++)
    {
        for(l = 0; l <= i; l++)
        {
            printf("%c", c);
        }
        c++;
        printf("\n");
    }

    return 0;
}