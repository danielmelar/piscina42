/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:33:49 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/09/02 12:35:35 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);

int	is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	is_prime;

	is_prime = 0;
	while (is_prime != 1)
	{
		is_prime = ft_is_prime(nb + 1);
		nb += 1;
	}
	return (nb);
}

int	is_prime(int nb)
{
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	else
		return (1);
}
