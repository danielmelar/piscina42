/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <student.42sp.org.br>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:21:11 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/15 20:02:25 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int	ascii_letter;

	ascii_letter = 122;
	while (ascii_letter >= 97)
	{
		write(1, &ascii_letter, 3);
		ascii_letter++;
	}
}
