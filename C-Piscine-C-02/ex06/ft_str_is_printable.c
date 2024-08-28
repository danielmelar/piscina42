/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 20:40:49 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/23 21:09:49 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str);

int	ft_strlen5(char *str);

int	ft_str_is_printable(char *str)
{
	int	index;

	index = 0;
	if (ft_strlen5(str) <= 0)
		return (1);
	else
	{
		while (str[index] != '\0')
		{
			if (str[index] >= 0 && str[index] <= 31)
				return (0);
			else if (str[index] == 127)
				return (0);
			index++;
		}
	}
	return (1);
}

int	ft_strlen5(char *str)
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
