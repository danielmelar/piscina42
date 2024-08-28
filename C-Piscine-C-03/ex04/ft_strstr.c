/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:28:34 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/28 19:00:17 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int ft_strlen3(char *str);

int ft_strncmp2(char *s1, char *s2, unsigned int n);

char	*ft_strstr(char *str, char *to_find)
{
	char c, sc;
	int len;

	if ((c = *to_find++) != '\0') {
		len = ft_strlen3(to_find);
		do {
			do {
				if ((sc = *str++) == '\0')
					return (0);
			} while (sc != c);
		} while (ft_strncmp2(str, to_find, len) != 0);
		str--;
	}
	return ((char *)str);

}

int ft_strlen3(char *str)
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

int ft_strncmp2(char *s1, char *s2, unsigned int n)
{
    int diference;
    unsigned index;

    index = 0;
    while (*s1 && (*s1 == *s2) && index <= n)
    {
        s1++;
        s2++;
        index++; 
    }

    diference = *s1 - *s2;
    return (diference);
}

