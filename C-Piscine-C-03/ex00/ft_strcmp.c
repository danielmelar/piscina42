/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <@student.42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:33:29 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/28 11:14:08 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2);

int ft_strcmp(char *s1, char *s2)
{
    int diference;

    while (*s1 && *s1 == *s2) // "*str" -> forma abreviada de "*str != '\0'"
    {
       s1++;
       s2++; 
    }

    diference = *s1 - *s2;
    return (diference);
}
