/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <student.42sp.org.br>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 18:21:11 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/19 18:21:15 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
{
	int	ascii_letter;

	ascii_letter = 'z';
	while (ascii_letter >= 'a')
	{
		write(1, &ascii_letter, 1);
		ascii_letter--;
	}
}
