/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:26:47 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/09/02 20:26:41 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str);

char	*ft_extract_number(char *str, char *numbers);

int		ft_check_odd_even(char *str);

int		ft_strlen(char *str);

int		ft_iterative_power(int nb, int power);

int	ft_atoi(char *str)
{
	int		odd_even;
	char	numbers[12];
	int		size;
	int		number;
	int		index_numbers;

	odd_even = ft_check_odd_even(str);
	if (odd_even == 2)
		return (0);
	*numbers = *ft_extract_number(str, numbers);
	size = ft_strlen(numbers);
	number = 0;
	index_numbers = 0;
	while (size - 1 > 0)
	{
		number = number + ((numbers[index_numbers++] - '0')
				* ft_iterative_power(10, --size));
	}
	number += numbers[size - 1] - '0';
	if (odd_even == 1)
		number *= -1;
	return (number);
}

int	ft_check_odd_even(char *str)
{
	int	odd_even;

	odd_even = 0;
	while (*str)
	{
		if (*str == '-')
			if (*str++ == '+' || *str++ >= '0' || *str++ <= '9')
			{
				if (*str++ != '-' || *str++ != '+' || *str++ != '0' || *str++ != '9')
					return (2);
				odd_even++;
			}
		str++;
	}
	if (odd_even % 2 == 0)
		return (1);
	else
		return (0);
}

char	*ft_extract_number(char *str, char *numbers)
{
	int	index_str;
	int	index_numbers;

	index_str = 0;
	index_numbers = 0;
	while (str[index_str] != '\0')
	{
		if (str[index_str] >= '0' && str[index_str] <= '9')
		{
			numbers[index_numbers] = str[index_str];
			index_numbers++;
			if ((str[index_str + 1] >= '0') && !(str[index_str + 1] <= '9'))
				break ;
		}
		index_str++;
	}
	numbers[index_numbers] = '\0';
	return (numbers);
}

int	ft_strlen(char *str)
{
	int	counter;
	int	index;

	counter = 0;
	index = 0;
	while (str[index] != '\0')
	{
		index++;
		counter++;
	}
	return (counter);
}

int	ft_iterative_power(int nb, int power)
{
	int	counter;
	int	power_result;

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
