#include <stdio.h>

int numero1, numero2;

int minha_funcao(int a, int b)
{
    int calculo;
    calculo = a % b;
    if(calculo == 0)
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
    printf("Digite um número: ");
    scanf("%d", &numero1);
    printf("Digite outro número: ");
    scanf("%d", &numero2);
    
    printf("\n%d", minha_funcao(numero1, numero2));
    return 0;
}
