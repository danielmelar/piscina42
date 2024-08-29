/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:37:39 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/28 15:38:50 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

int ft_strlen(char *str);

char	*ft_strcat(char *dest, char *src)
{
    int len_dest = ft_strlen(dest);
    unsigned int i;

    i = 0;

    while (src[i] != '\0')
    {
        dest[len_dest + i] = src[i];
        i++;
    }

    dest[len_dest + i] = '\0';

    return dest;
}

int	ft_strlen(char *str)
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


