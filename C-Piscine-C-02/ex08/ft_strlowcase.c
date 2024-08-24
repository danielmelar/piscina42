/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 21:00:44 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/23 21:07:13 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 65 && str[index] <= 90)
		str[index] = str[index] + 32;
		index++;
	}
	str[index] = '\0';
	return (str);
}
