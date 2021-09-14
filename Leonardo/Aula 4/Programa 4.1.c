#include <stdio.h>

int main()
{
    int i;
    for(i = 0; i <= 15; i++)
    {
        printf("i = %d\n", i);
        if(i % 2 == 0)
        {
            printf("par\n");
        }
        else
        {
            printf("ímpar\n");
        }
    }

    return 0;
}