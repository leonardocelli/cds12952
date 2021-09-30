#include<stdio.h>

int main()
{
	int vetor[5] = {3, 5, 23, 28, 11};
	int menor = vetor[0], maior = vetor[0];
	int soma = 0;
	int l = 0;
	
	while(l < 5)
	{
		if(vetor[l] < menor) menor = vetor[l];
		if(vetor[l] > maior) maior = vetor[l];
		soma += vetor[l];
		l++;
	}

	printf("\nMenor = %d", menor);

	printf("\nMaior = %d", maior);
	
	printf("\nMédia = %d\n", soma / 5);

}