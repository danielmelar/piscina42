#include <stdio.h>
#include "ex00/ft_iterative_factorial.c"

void test_ex00(int n);

int main()
{
    test_ex00(5);
}

void test_ex00(int n)
{
    printf("%i\n", ft_iterative_factorial(n));
}