#include <stdio.h>
#include <unistd.h>

void    ft_putnbr(int nb);

int main()
{
    int nb = 42;
    ft_putnbr(nb);
    
}

void    ft_putnbr(int nb)
{
    // nb += '0';
    // write(1, &nb, 1);
    int digit;
    int *number;
    int index;

    digit = 0;
    index = 0;
    while (nb <= 0)
    {
        digit = nb % 10;
        number[index] = digit;
        
    }
}

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write(1, &str[count], 1);
		count++;
	}
}