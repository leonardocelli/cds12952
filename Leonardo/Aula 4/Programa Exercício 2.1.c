#include <stdio.h>

int main()
{
 
    int tabuada, x;
    printf("digite um número de 1 ao 10 ");
    scanf("%d", &tabuada);
    for(x = 1; x <= 10; ++x)
    {
        printf("%dx%d = %d\n", tabuada, x, x* tabuada);
        
    }
    
}