#include <stdlib.h>
#include <stdio.h>

void chat (int taille, int diviseur)
{
	int **wouf;
	int i;
	int j;

	j = -1;
	i = -1;
	wouf = malloc(taille*sizeof(int));
	while (++i < diviseur)
		wouf[i] = malloc(taille/diviseur*sizeof(int));
	i = -1;
	while (++i < taille)
		wouf[i/(taille/diviseur)][i%(taille/diviseur)] = i*i;
	i = -1;
	while (++i < diviseur)
	{
		while (++j < (taille/diviseur))
		{
			printf("%d ",wouf[i][j]);
		}
		j = -1;
		printf("\n");
	}
	i = -1;
	while (++i < diviseur)
	{
		free (wouf[i]);
	}
	free (wouf);
}

int main ()
{
	chat(100, 10);
	return (0);
}