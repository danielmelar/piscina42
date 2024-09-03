/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:20:58 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/09/03 19:21:44 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int    main(int argc, char **argv)
{
    int index;

    index = 1;
    while (index < argc)
    {
        ft_putstr(argv[index]);
        write(1, "\n", 1);
        index++;
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
