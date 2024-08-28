/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <@student.42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:53:28 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/21 19:01:47 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	counter;
	int index;

	counter = 0;
	index = 0;
	while (str[index] != '\0')
	{
		index++;
		counter++;
	}
	return (counter);
}
