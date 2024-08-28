/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:33:29 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/27 20:33:48 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_strcmp(char *s1, char *s2);

int ft_strcmp(char *s1, char *s2)
{
    int index;
    int diference;
    int s1_size;
    int s2_size;

    index = 0;
    s1_size = 0;
    s2_size = 0;
    while (s1[s1_size] != '\0')
    {
        s1_size++;
    }

    while (s2[s2_size] != '\0')
    {
        s2_size++;
    }

    diference =  s2[s2_size] - s1[s1_size];

    return (diference);
}