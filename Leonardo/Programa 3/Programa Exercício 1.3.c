#include <stdio.h>

int main()
{
    int n1, n2 ,n3 ,n4, resultado1, resultado2, resultado3 , resultado4;
    
    printf("Digite um número ");
    scanf("%d", &n1);
    
    printf("Digite um número ");
    scanf("%d", &n2);
    
    printf("Digite um número ");
    scanf("%d", &n3);
    
    printf("Digite um número ");
    scanf("%d", &n4);
    
    resultado1 = n1 * n1;
    resultado2 = n2 * n2;
    resultado3 = n3 * n3;
    resultado4 = n4 * n4;
    
    if(resultado3 >= 1000)
    {
        printf ("o resultado 3 é maior que 1000, sendo ele %d\n", resultado3);
    }
    else
    {
        printf ("os resultados são %d, %d, %d e %d", resultado1, resultado2, resultado3, resultado4);
    }
    return 0;
}