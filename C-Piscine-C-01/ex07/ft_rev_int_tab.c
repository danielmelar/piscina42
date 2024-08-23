/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <@student.42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 19:02:48 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/22 20:20:21 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	last_index;
	int	temp;

	index = 0;
	last_index = size - 1;
	while (index < last_index)
	{
		temp = tab[index];
		tab[index] = tab[last_index];
		tab[last_index] = temp;
		index++;
		last_index--;
	}
}
