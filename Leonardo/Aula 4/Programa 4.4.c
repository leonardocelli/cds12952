#include <stdio.h>

int main()
{
    int i = 0;
    while(1)
    {
        printf("\nDigite um número negativo para sair: ");
        scanf("%d", &i);
        
        if(i == 0) continue;
        
        if(i%2 == 0) printf("\nO número digitado é par ");
        else printf("\n O número digitado é impar");
    }

    return 0;
}
