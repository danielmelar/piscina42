#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"
#include "ex08/ft_sort_int_tab.c"

#include <stdio.h>

int main()
{
	int int_tab[5] = {7, 5, 2, 9, 1};
	
	int	index;

	index = 0;

	while (index < 5)
	{
		printf("%d", int_tab[index]);
		index++;
	}

	ft_sort_int_tab(int_tab, 5);
	
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
