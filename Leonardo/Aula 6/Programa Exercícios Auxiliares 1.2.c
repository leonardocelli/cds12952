#include <stdio.h>

int main()
{
    int vet[5];
    int i;
    for (i = 0; i<5; i++)
    {
        printf("\n digite o valor do elemento %d ", i+1);
        scanf("%d", &vet[i]);
    }
    
    int maior = vet[0];
    int posMaior = 0;
    printf("\n o vetor é: %d", vet[0]);
    for (i = 1; i<5; i++ )
    {
        printf(" %d ", vet[i]);
        if (vet[i] > maior)
        {
            maior = vet[i];
            posMaior = i;
        }
    }
    
    printf("\nO maior elemento e %d, localizado na posição %d.\n", maior, posMaior +1);
    
    return 0;
}