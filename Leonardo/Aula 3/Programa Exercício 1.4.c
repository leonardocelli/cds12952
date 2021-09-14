# include <stdio.h>

int main()
{
    int n;
    printf("Digite um número inteiro qualquer: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        printf("O número é par");
    else
        printf("O número é impar");

    if(n < 0)
        printf(" e negativo");
    else
        printf(" e positivo");

    printf("\n\n");

    return 0;
}