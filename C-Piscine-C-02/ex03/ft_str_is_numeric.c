/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 20:15:30 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/27 16:20:39 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str);

int	ft_strlen2(char *str);

int	ft_str_is_numeric(char *str)
{
	int	index;

	index = 0;
	if (ft_strlen2(str) <= 0)
		return (1);
	else
	{
		while (str[index] != '\0')
		{
			if (str[index] <= 47)
				return (0);
			else if (str[index] >= 58)
				return (0);
			index++;
		}
	}
	return (1);
}

int	ft_strlen2(char *str)
{
	int	index;
	int	size;

	index = 0;
	size = 0;
	while (str[index] != '\0')
	{
		size++;
		index++;
	}
	return (size);
}
