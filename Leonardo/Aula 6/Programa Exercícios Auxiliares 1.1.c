#include <stdio.h>

int main()
{
    int i;
    float notas[5],media;
    
    for(i=0;i<5;i++)
    {
    printf("Digite a nota do aluno %d: ",i+1);
    scanf("%f",&notas[i]);
    
    media += notas[i];

    }
 
    printf("A media geral é: %.1f",media/5.0);

    return 0;
}