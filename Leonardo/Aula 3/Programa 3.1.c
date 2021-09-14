#include <stdio.h>

int main()
{
    char nome[20];
    int idade;
    
    printf("\nqual o seu nome? ");
    scanf("%s", nome);
    
    printf("\nqual a sua idade? ");
    scanf("%d", &idade);
    
    printf("seu nome é %s e sua idade é %d ", nome, idade);
    
}
