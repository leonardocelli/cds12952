# include <stdio.h>

int points(char games[10][4]) {
	int pontos = 0, i;
	
	for(i = 0; i < 10; i++)
	{
		if(games[i][0] > games[i][2])
			pontos += 3;
		else if(games[i][0] == games[i][2])
			pontos += 1;
	}

	return pontos;
}

int main()
{
    int i;
    char games[10][4] = {"1:0","2:0","3:0","4:4","2:2","3:3","1:4","2:3","2:4","3:4"};

    printf("PARTIDAS:\n");
    for(i = 0; i < 10; i++)
        puts(games[i]);

    printf("O total de pontos do nosso time é %d.", points(games));

    printf("\n\n");
    return 0;
}