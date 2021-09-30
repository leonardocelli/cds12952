# include <stdio.h>

int main()
{
	int matriz[3][3] = {
		10, 20, 25,
		30, 40, 45,
		50, 60, 65
	};
	int c, l;

	for(c = 0; c < 3; c++)
	{
		for(l = 0; l < 3; l++)
		{
			if(c != l)
				printf("%d ", matriz[c][l]);
		}
	}

	return 0;
}