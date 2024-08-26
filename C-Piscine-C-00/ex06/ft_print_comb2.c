/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:47:46 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/26 10:56:14 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_print_comb2(void);

void	ft_print_comb2(void)
{
        int     digit_1;
        int     digit_2;
        int     digit_3;
	int	digit_4;

        digit_1 = '0';
        while (digit_1 <= '9')
        {
                digit_2 = '0';
                while (digit_2 <= '8')
                {
                        digit_3 = '0';
                        while (digit_3 <= '9')
                        {
				digit_4 = '1';
				while (digit_4 <= '9')
				{
                                	write(1, &digit_1, 1);
                                	write(1, &digit_2, 1);
					write(1, &" ", 1);
                                	write(1, &digit_3, 1);
					write(1, &digit_4, 1);
                                	write(1, &",  ", 1);
					digit_4++;
				}
				digit_3++;
                        }
                        digit_2++;
                }
                digit_1++;
        }
}

