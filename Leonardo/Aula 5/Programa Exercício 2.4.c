# include <stdio.h>

int main()
{
    int nmr_ramos, i, l;

    printf("Digite o número de ramos: ");
    scanf("%d", &nmr_ramos);

    for(i = 0; i <= nmr_ramos; i++)
    {
        for(l = 0; l <= i; l++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}