#include <stdio.h>
#include <unistd.h>

void    ft_putnbr(int nb);

int main()
{
    int nb = -425;
    ft_putnbr(nb);
}

void    ft_putnbr(int nb)
{
    int mod_temp;
    int char_number;


    char buffer[12];
    int index;

    index = 0;
    if (nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }

    while (nb > 0)
    {
        char_number = (nb % 10) + '0';
        buffer[index++] = char_number;
        nb = nb / 10;
    }
    
    while (index > 0)
    {
        write(1, &buffer[--index], 1);
    }
}

