/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 20:27:36 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/23 20:35:12 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str);

int	ft_strlen3(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	index;

	index = 0;
	if (ft_strlen3 <= 0)
		return (1);
	else
	{
		while (str[index] != '\0')
		{
			if (str[index] >= 32 && str[index] <= 96)
				return (0);
			else if (str[index] >= 123 && str[index] <= 126)
				return (0);
			index++;
		}
	}
	return (1);
}

int	ft_strlen3(char *str)
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
