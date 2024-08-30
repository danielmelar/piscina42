#include <stdio.h>
#include <unistd.h>

void    ft_putnbr(int nb);

int main()
{
    int nb = 2147483647;
    ft_putnbr(nb);
    
}

void    ft_putnbr(int nb)
{
    int mod_temp;
    int to_print;

    char *numbers;

    while (nb > 9)
    {
        if ((nb % 10) != 0)
        {
            mod_temp = nb % 10;
            to_print = mod_temp + '0';
            printf("%c", to_print);
            nb -= mod_temp;
        }
        else
        {
            nb = nb / 10;
        }
    }

    nb += '0';
    printf("%c", nb);
}