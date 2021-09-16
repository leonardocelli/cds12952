#include <stdio.h>

int main()
{
    int l; 
    int i;
    int fibonacci1 = 0, fibonacci2 = 1, fibonacci = 0; 
     
    printf("Digite um número positivo: ");
    scanf("%d", &l);

    for(i = 0; i < l; i++) 
    {
        printf("%d ", fibonacci);
        fibonacci = fibonacci1 + fibonacci2;
        fibonacci2 = fibonacci1;
        fibonacci1 = fibonacci;
    }

    return 0;
}