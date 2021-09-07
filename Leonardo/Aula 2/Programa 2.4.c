#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, media;
    
    printf("\nNota 1: ");
    scanf("%f", &n1);
    
    printf("\nNota 2: ");
    scanf("%f", &n2);
    
    printf("\nNota 3: ");
    scanf("%f", &n3);
    
    printf("\nNota 4: ");
    scanf("%f", &n4);
    
    media = (n1 + n2 + n3 + n4) / 4;

    if(media >= 7)
    {
        printf("\naluno aprovado");
    }
    
    if(media < 7)
    {
        printf("\naluno reprovado");
    }
    printf("\n\nMédia aritimética : %f", media);

    return 0;
}