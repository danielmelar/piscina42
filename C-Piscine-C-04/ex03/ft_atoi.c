/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:26:47 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/09/02 13:40:07 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	check_odd_even(char *str);

int	ft_atoi(char *str)
{
	int	odd_even;

	odd_even = check_odd_even(str);
	return (odd_even);
}

int	check_odd_even(char *str)
{
	int	odd_even;

	odd_even = 0;
	while (*str)
	{
		if (*str == '-')
			odd_even++;
		str++;
	}
	if (odd_even % 2 == 0)
		return (1);
	else
		return (0);
}
