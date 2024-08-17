/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <@student.42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:53:07 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/17 12:39:02 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar.c"

void rush(int x, int y);

int main()
{
   rush(5, 5);
}

int mid_x = 0;
int mid_y = 0;

void rush(int x, int y)
{
    while(mid_x < x && mid_y < y)
    {
	    ft_putchar('o');
        mid_x++;
        mid_y++;
    }
    write(1, "\n", 1);
}
                                     
