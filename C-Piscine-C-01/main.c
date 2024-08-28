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
	printf("Inicio ex00=============\n");
	int n = 5;
	printf("%d\n", n);
	ft_ft(&n);
	printf("%d\n", n);
	printf("fim ex00=============\n");
	printf("\n");
	
	printf("Inicio ex01=============\n");
	int m = 5;
	int *m1 = &m;
	int **m2 = &m1;
	int ***m3 = &m2;
	int ****m4 = &m3;
	int *****m5 = &m4;
	int ******m6 = &m5;
	int *******m7 = &m6;
	int ********m8 = &m7;
	int *********m9 = &m8;
	printf("%d\n", m);
	ft_ft(&m);
	printf("%d\n", m);
	printf("fim ex01=============\n");
	printf("\n");

	printf("Inicio ex02=============\n");
	int a = 2;
	int b = 5;
	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	printf("fim ex02=============\n");
	printf("\n");

	printf("Inicio ex03=============\n");
	int d = 10;
	int e = 3;
	int div = 0;
	int mod = 0;
	ft_div_mod(d, e, &div, &mod);
	printf("%d\n", d);
	printf("%d\n", e);
	printf("%d\n", div);
	printf("%d\n", mod);

	printf("fim ex03=============\n");
	printf("\n");

	printf("Inicio ex04=============\n");
	int f = 10;
	int g = 3;
	ft_ultimate_div_mod(&f, &g);
	printf("%d\n", f);
	printf("%d\n", g);
	
	printf("fim ex04=============\n");
	printf("\n");
	
	printf("Inicio ex05=============\n");
	char *str = "ola, pisciner";
	ft_putstr(str);
	printf("\n");
	printf("fim ex05=============\n");
	printf("\n");
	
	printf("Inicio ex06=============\n");
	char *strlen = ""; // 18
	int len = ft_strlen(strlen);
	printf("%d", len);
	printf("\n");
	printf("fim ex06=============\n");
	printf("\n");
	
	printf("Inicio ex07=============\n");
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
	printf("fim ex07=============\n");
	printf("\n");return 0 c terminal
	
	printf("Inicio ex08=============\n");
	int int_rev_tab[5] = {1, 4, 3, 9, 7}; // output: 1, 3, 4, 7, 9
	int	indice;
	indice = 0;
	while (indice < 5)
	{
		printf("%d", int_rev_tab[indice]);
		indice++;
	}
	ft_sort_int_tab(int_rev_tab, 5);
	printf("\n");
	indice = 0;
	while (indice < 5)
	{
			printf("%d", int_rev_tab[indice]);
			indice++;
	}
	printf("\n");
	printf("fim ex08=============\n");
	printf("\n");

	return (0);
}
