#include <string.h>
#include <stdio.h>

int main()
{
    char string[100];
    int i;
    printf ("Digite uma string: ");
    fgets(string, 100, stdin);
    
    for(i = 0; i <= strlen(string); i++)
    {
        printf("\t%c\n", string[i]);
    }
    

    return 0;
}
