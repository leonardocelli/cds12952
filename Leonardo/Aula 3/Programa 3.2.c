#include <stdio.h>

int main()
{
    int opcao;
    puts("1. Recarregar");
    puts("2. Checar o saldo");
    puts("9. Falar com atendente")
    ;
    

    scanf("%d", &opcao);
    
    switch(opcao)
    {
        case 1:
            puts("Recarregar");
            break;
        case 2:
            puts("Checar o saldo");
            break;
        case 3:
            puts("Falar com a atendente");
            break;
        case 9:
            puts("Cai fora então");
            break;
    }
    
    return 0;
}