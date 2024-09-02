#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
#include "ex02/ft_putnbr.c"
#include "ex03/ft_atoi.c"
#include <stdio.h>
#include <unistd.h>

void	test_ex00(char *str);
void	test_ex01(char *str);
void	test_ex02(int nb);
void	test_ex03(char *nb);

int	main(void)
{
	// test_ex00("daniel");
	// test_ex01("daniel");
	//test_ex02(-12); // arrumar ft_putnbr para printar essa numero
	test_ex03("kldjaslkjda-kasljda-");
}

void	test_ex00(char *str)
{
	int	size;

	size = ft_strlen(str);
	printf("%i", size);
}

void	test_ex01(char *str)
{
	ft_putstr(str);
}

void	test_ex02(int nb)
{
	ft_putnbr(nb);
}

void	test_ex03(char *nb)
{
	printf("%d\n", ft_atoi(nb));
}
