/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:27:39 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/31 18:48:30 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	int		char_number;
	char	numbers[12];
	int		index;

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	index = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while (nb > 0)
	{
		char_number = (nb % 10) + '0';
		numbers[index++] = char_number;
		nb /= 10;
	}
	while (index > 0)
	{
		write(1, &numbers[--index], 1);
	}
}
