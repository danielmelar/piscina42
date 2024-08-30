/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.sp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:36:57 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/28 15:37:18 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				diference;
	unsigned int	index;

	index = 0;
	diference = 0;
	if (n == index)
		return (diference);
	else
	{
		while (*s1 && *s1 == *s2 && index < n - 1)
		{
			s1++;
			s2++;
			index++;
		}
	}
	diference = (*s1 - *s2);
	return (diference);
}
