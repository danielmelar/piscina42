/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 20:47:08 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/23 21:08:55 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= 97 && str[index] <= 122)
		str[index] = str[index] - 32;
		index++;
	}
	str[index] = '\0';
	return (str);
}
