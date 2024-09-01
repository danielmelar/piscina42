int ft_is_prime(int nb);

int ft_is_prime(int nb)
{
    if (nb == 0 || nb == 1)
        return (0);
    if (!(nb / 1 == nb) && !(nb / nb == 1))
        return (0);
    else
        return (1);   
}