#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"
#include <stdio.h>

void	test_ex00(int nb);
void	test_ex01(int nb);
void	test_ex02(int nb, int power);
void	test_ex03(int nb, int power);
void	test_ex04(int index);
void	test_ex05(int nb);
void	test_ex06(int nb);
void	test_ex07(int nb);

int		ft_sqrt(int n);

int	main(void)
{
	test_ex07(-2);
	test_ex07(0);
	test_ex07(1);
	test_ex07(11);
	test_ex07(4);
}

void	test_ex00(int nb)
{
	printf("%d\n", ft_iterative_factorial(nb));
}

void	test_ex01(int nb)
{
	printf("%d\n", ft_recursive_factorial(nb));
}

void	test_ex02(int nb, int power)
{
	printf("%d\n", ft_iterative_power(nb, power));
}

void	test_ex03(int nb, int power)
{
	printf("%d\n", ft_recursive_power(nb, power));
}

void	test_ex04(int index)
{
	printf("%d\n", ft_fibonacci(index));
}

void	test_ex05(int nb)
{
	printf("%d\n", ft_sqrt(nb));
}

void	test_ex06(int nb)
{
	printf("%d\n", ft_is_prime(nb));
}

void	test_ex07(int nb)
{
	printf("%d\n", ft_find_next_prime(nb));
}