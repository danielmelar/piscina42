/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <@student.42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 09:04:18 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/22 09:04:21 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strncpy(char *dest, char *src, unsigned int n);

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int index;
    int counter;
    
    index = 0;
    while (counter <= n)
    {
        while (src[index] != '\0')
        {
            dest[index] = src[index];
            index++;
            counter++;
        }
    }

    dest[index] = '\0';

    return dest;
}


