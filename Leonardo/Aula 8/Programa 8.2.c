#include <stdio.h>

int main()
{
    float notas[2][3] = {6, 7, 8, 9, 6, 7};
    int linha, coluna;
    
    for(linha = 0; linha < 2; linha ++)
    {
        for (coluna = 0; coluna <3; coluna ++)
        {
            printf("%2.2f ", notas[linha][coluna] );
        }
        printf("\n");
    }

printf("\n");
for(linha = 1; linha >= 0; linha --)
{
    printf("\n");
    for(coluna = 2; coluna >= 0; coluna --)
        printf("%2.2f ", notas[linha][coluna]);
}

    return 0;
}
