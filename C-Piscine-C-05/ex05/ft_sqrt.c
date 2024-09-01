int ft_sqrt(int nb);

int ft_sqrt(int nb)
{
    int sub_number;
    int counter;

    sub_number = 1;
    counter = 0;
    while ((nb - sub_number) >= 0)
    {
        nb -= sub_number;
        counter++;
        sub_number += 2;
    }

    if (nb > 0)
        return (0);

    return (counter);
}