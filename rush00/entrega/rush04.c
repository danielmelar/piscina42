/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <@student.42sp.org.br>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:39:29 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/18 15:39:32 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	check_position(int x, int y, int mid_x, int mid_y)
{
	if (mid_y == 0 && mid_x == 0)
		ft_putchar('A');
	else if (mid_y == 0 && mid_x == x - 1)
		ft_putchar('C');
	else if (mid_y == y - 1 && mid_x == 0)
		ft_putchar('C');
	else if (mid_y == y - 1 && mid_x == x - 1)
		ft_putchar('A');
	else if ((mid_y == 0 && mid_x < x))
		ft_putchar('B');
	else if (mid_y < y - 1 && mid_x == x - 1)
		ft_putchar('B');
	else if ((mid_y < y - 1 && mid_x == 0))
		ft_putchar('B');
	else if ((mid_y == y - 1 && mid_x < x - 1))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush04(int x, int y)
{
	int		mid_y;
	int		mid_x;

	mid_y = 0;
	while (mid_y < y)
	{
		mid_x = 0;
		while (mid_x < x)
		{
			check_position(x, y, mid_y, mid_x);
			mid_x++;
		}
		ft_putchar('\n');
		mid_y++;
	}
}
