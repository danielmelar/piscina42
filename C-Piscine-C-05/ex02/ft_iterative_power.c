int ft_iterative_power(int nb, int power);

int ft_iterative_power(int nb, int power)
{
    int counter;
    int power_result;

    if (nb < 0)
        return (0);

    counter = 1;
    power_result = 1;
    while (counter <= power)
    {
        power_result *= nb;
        counter++;
    }

    return (power_result);
}

// 1, 3