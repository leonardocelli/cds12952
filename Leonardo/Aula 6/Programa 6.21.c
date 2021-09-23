#include <stdio.h>
#include <string.h>

int main()
{
    char string [100];
    int tamanho;
    printf(" digite uma string: ");
    fgets(string, 100, stdin);
    
    tamanho = strlen(string);
    printf("Quantidade de caracteres: %d.\n ", &tamanho);
    return 0;
}