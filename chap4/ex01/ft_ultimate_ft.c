#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr);

int main()
{
	int a = 1;
	

	int nb = 69;
	int *p_nb = &nb;
	int **p_p_nb = &p_nb;
	int ***p_p_p_nb = &p_p_nb;
	int ****p_p_p_p_nb = &p_p_p_nb;
	int *****p_p_p_p_p_nb = &p_p_p_p_nb;
	int ******p_p_p_p_p_p_nb = &p_p_p_p_p_nb;
	int *******p_p_p_p_p_p_p_nb = &p_p_p_p_p_p_nb;
	int ********p_p_p_p_p_p_p_p_nb = &p_p_p_p_p_p_p_nb;
	int *********p_p_p_p_p_p_p_p_p_nb = &p_p_p_p_p_p_p_p_nb;
	ft_ultimate_ft(p_p_p_p_p_p_p_p_p_nb);
	printf("%d me donne envie de mourrir", nb);

}

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
