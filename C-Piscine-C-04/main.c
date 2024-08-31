#include <stdio.h>
#include <unistd.h>

void    ft_putnbr(int nb);

int main()
{
    int nb = -425;
    //printf("input: \n%i\n", nb);
    ft_putnbr(nb);
}

void    ft_putnbr(int nb)
{
    int mod_temp;
    int to_print;

    int output_number;
    int counter_y;

    output_number = 0;
    counter_y = 0;
    if (nb < 0)
    {
        //write(1, "-", 1);
        nb *= -1;
    }

    while (nb > 9)
    {
        printf("nb: %i\n", nb);


        if ((nb % 10) != 0)
        {
            mod_temp = nb % 10;
            // to_print = mod_temp + '0';
            // write(1, &to_print, 1);
            nb -= mod_temp;
        }
        else
        {
            nb = nb / 10;
        }


        printf("y: %i\n", counter_y);
        printf("output: %i\n", output_number);
    	printf("mod: %i\n", mod_temp);


        if (counter_y > 0)
            output_number += mod_temp * (10 * counter_y);
        else
            output_number += mod_temp;    
        // output_number = mod_temp + '0';
        // write(1, &output_number, 1);

        counter_y++;


        printf("\n");
        
    }
    //output_number += mod_temp * (10 * counter_y);
    //printf("output_number: %i\n", output_number);


    // nb += '0';
    // printf("%c", nb);
}