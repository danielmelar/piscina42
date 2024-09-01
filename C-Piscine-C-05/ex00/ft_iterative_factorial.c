/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 19:37:18 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/31 21:23:59 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	factorial;
	int	count;

	factorial = 1;
	count = 1;
	if (nb == 0)
		return (0);
	while (count <= nb)
	{
		factorial = factorial * count;
		count++;
	}
	return (factorial);
}
