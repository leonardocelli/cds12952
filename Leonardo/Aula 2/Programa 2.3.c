#include <stdio.h>

int main()
{
    int idade;
    char inicial;
    
    printf("digite sua inicial");
    scanf("%c", &inicial);
    
    printf ("digite a sua idade : ");
    scanf("%d", &idade);
    
    
    printf("\n inicial:%c\tIdade: %d.\n", inicial, idade);
    
    return 0;
}