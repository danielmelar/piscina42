#include "ex07/ft_rev_int_tab.c"

#include <stdio.h>

int main()
{
	int int_tab[5] = {1, 2, 3, 7, 9};
	
	int	index;

	index = 0;

	while (index < 5)
	{
		printf("%d", int_tab[index]);
		index++;
	}

	ft_rev_int_tab(int_tab, 5);
	
	printf("\n");
    
	index = 0;

	while (index < 5)
	{
			printf("%d", int_tab[index]);
			index++;
	}


	printf("\n");
	return 0;
}