/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 20:35:59 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/23 21:10:08 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str);

int	ft_strlen(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	index;
	int	size;

	index = 0;
	size = ft_strlen(str);
	if (size <= 0)
		return (1);
	else
	{
		while (str[index] != '\0')
		{
			if (str[index] >= 32 && str[index] <= 64)
				return (0);
			else if (str[index] >= 91 && str[index] <= 126)
				return (0);
			index++;
		}
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
