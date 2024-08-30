/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 21:08:55 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/29 21:09:26 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen2(char *str);

char	*ft_strncat(char *dest, const char *src, unsigned int n)
{
	int				dest_len;
	unsigned int	i;

	dest_len = ft_strlen2(dest);
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int	ft_strlen2(char *str)
{
	int	index;
	int	size;

	index = 0;
	size = 0;
	while (str[index] != '\0')
	{
		size++;
		index++;
	}
	return (size);
}
