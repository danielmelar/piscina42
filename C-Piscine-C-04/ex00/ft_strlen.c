/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 17:28:57 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/31 17:29:16 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str);

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
