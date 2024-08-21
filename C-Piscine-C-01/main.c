#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"

#include <stdio.h>

int main()
{
	int int_tab[3] = {1, 2, 3};
	
	int	count;

	count = 0;

	while (int_tab[count] != '\0')
	{
		printf("%d", int_tab[count]);
		count++;
	}

	ft_rev_int_tab(int_tab, 3);
	printf("\n");
        count = 0;

        while (int_tab[count] != '\0')
        {
                printf("%d", int_tab[count]);
                count++;
        }


	printf("\n");
	return 0;
}
