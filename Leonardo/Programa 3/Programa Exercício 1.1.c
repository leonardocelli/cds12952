#include <stdio.h>

int main()
{
    float peso, multa = 0;
    float excesso = 0;
    
    printf("digite o peso : ");
    scanf("%f", &peso);
    
    if(peso > 50)
    {
        excesso = peso - 50;
        multa = excesso * 4;
    }    
    
    printf("Peso: %2.2f\n", peso);
    printf("Excesso: %2.2f\n", excesso);
    printf("Multa: %2.2f\n", multa);
    

    return 0;
}