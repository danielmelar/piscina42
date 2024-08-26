/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.sp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:09:49 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/26 10:46:25 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_comb(void)
{
	int	digit_1;
	int	digit_2;
	int	digit_3;

	digit_1 = '0';
	while (digit_1 <= '7')
	{
		digit_2 = '1';
		while (digit_2 <= '8')
		{
			digit_3 = '3';
			while (digit_3 <= '9')
			{	
				write(1, &digit_1, 1);
				write(1, &digit_2, 1);
				write(1, &digit_3, 1);
				write(1, &", ", 1);
				digit_3++;
			}
			digit_2++;
		}
		digit_1++;
	}
}
