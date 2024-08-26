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
#include <stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	index;

	index = 0;
	printf("passou aqui!0\n");
	// last char -> '\0'
	while (*str != '\0')
	{
		printf("passou aqui!\n");
		// A = 65, Z = 90
		if (str[index] >= 'A' && str[index] <= 'Z')
		{
		printf("passou aqui!2\n");
			str[index] += 32;

		}
		printf("passou aqui!3\n");
		str++;
		index++;
	}
	printf("passou aqui!4\n");
	return (str);
}
