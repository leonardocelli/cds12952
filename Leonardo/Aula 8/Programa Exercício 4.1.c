# include <stdio.h>

int main()
{
	int matriz[3][3] = {
		10, 20, 25,
		30, 40, 45,
		50, 60, 65
	};
	int c, l;
	
    for(l = 0; l <= 2; l++)
    {
        printf("matriz[%d][%d] = %d\n", l, l, matriz[l][l]);
    }


	for(c = 0, l = 2; c <= 2; c++, l--) 
	{	
	    printf("matriz[%d][%d] = %d\n", c, l, matriz[c][l]); 
	} 
	return 0;
}