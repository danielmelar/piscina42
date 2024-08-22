/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <@student.42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 08:10:43 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/22 08:15:06 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_sort_int_tab(int *tab, int size);

void ft_sort_int_tab(int *tab, int size)
{
    int index;
    int temp;   

    index = 0;
    while (index < size)
    {
        if (index > 0)
        {
            if (tab[index] < tab[index - 1] )
            {
                temp = tab[index];
                tab[index] = tab[index - 1];
                tab[index - 1] = temp;

                index = 0;
            }
        }

        index++;
    }
}