/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <@student.42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 08:18:08 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/22 09:02:31 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char    *ft_strcpy(char *dest, char *src);

char    *ft_strcpy(char *dest, char *src)
{
    int index = 0;

    while (src[index] != '\0')
    {
        dest[index] = src[index];
        index++;  
    }

    dest[index] = '\0';

    return dest;
}
