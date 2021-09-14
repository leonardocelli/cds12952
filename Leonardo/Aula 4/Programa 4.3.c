#include <stdio.h>

int main()
{
    int i;
    do{
        printf("\nDigite um número negativo para sair : ");
        scanf("%d", &i);
    
    }while (i >= 0);

    return 0;
}