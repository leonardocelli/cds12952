#include <stdio.h>

int over_the_road(int address, int street) {
	int i, l = 1, m = street*2;

	for(i = 0; i < street; i++)
	{
		if(l == address)
	
			return m;

		else if(m == address)
			return l;

		m-=2;
		l+=2;
	}

	return 0;
}

int main()
{
	int comprimento, n_casa;
	printf("Comprimento da rua: ");
	scanf("%d", &comprimento);

	printf("\nNúmero da sua casa: ");
	scanf("%d", &n_casa);

	printf("\n\nO número da casa em frente a sua é %d.\n\n", over_the_road(n_casa, comprimento));
	return 0;
}