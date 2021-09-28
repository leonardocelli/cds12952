#include <string.h>
#include <stdio.h>

int main()
{
    char string[100];
    int i;
    while(1)
    {
        printf("\nDigite uma string ou SAIR para finalizar o programa: ");
        fgets(string, 100, stdin); // stdin significa entrada padrão std = standanrd = in = imput

        if (strcmp(string, "SAIR\n") == 0)
           return 0;
        
        for(i = 0; i < strlen(string); i++)
        
        if(string[i] >= 'a' && string[i] <= 'z')
        {
            printf("\nA string NÃO está toda em letras maiúsculas\n");
            break;
        }
        else
        {
            printf("\nA string ESTÁ toda em letras maiúsculas\n");
            break;
        }
    }
    