#include<stdio.h>
#include<string.h>

int main()
{
	char string[100];
	char resultado[100] = "";
	int i, j, k = 0;
	printf("Digite uma string: ");
	fgets(string, 100, stdin);

	for(i = 0; i < strlen(string); i++)
	{
		for(j = 0; j < strlen(string); j++)
		{
			if(i != j && string[i] == string[j])
			{
				resultado[k] = string[i];
				k++;
				break;
			}
		}
	}

	printf("Resultado: %s\n", resultado);

	return 0;
}
