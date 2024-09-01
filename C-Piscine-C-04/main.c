#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
#include "ex02/ft_putnbr.c"
#include <stdio.h>
#include <unistd.h>

void	test_ex00(char *str);
void	test_ex01(char *str);
void	test_ex02(int nb);

int	main(void)
{
	// test_ex00("daniel");
	// test_ex01("daniel");
	test_ex02(-2147483648); // arrumar ft_putnbr para printar essa numero
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
