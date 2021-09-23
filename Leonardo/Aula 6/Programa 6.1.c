#include <stdio.h>
#include <string.h>

int main()
{
    char nome[100] ;
    int i;
    
    printf(" Nome: ");
    fgets(nome, 100, stdin);
        
    for (i = 0; nome [i] != '\0'; i++);
    {
        printf("\n\t%c", nome[i]);
    }
    return 0;
}
