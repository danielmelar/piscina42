/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapilatize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dyuri-de <dyuri-de@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:43:18 by dyuri-de          #+#    #+#             */
/*   Updated: 2024/08/25 18:14:46 by dyuri-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcapitalize(char *str);

int	ft_is_alpha(char chr)
{
	if (chr >= 65 && chr <= 90)
		return (1);
	else if (chr >= 97 && chr <= 122)
		return (1);
	else
		return (0);
}

char	ft_chrcapitalize(char chr)
{
	if (chr >= 97 && chr <= 122)
		chr -= 32;
	return (chr);
}

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	is_alpha;

	index = 0;
	while (str[index] != '\0')
	{
		is_alpha = ft_is_alpha(str[index]);
		if (is_alpha == 1)
		{
			is_alpha = ft_is_alpha(str[index - 1]);
			if (is_alpha == 0)
			str[index] = ft_chrcapitalize(str[index]);
		}
		index++;
	}
	str[index] = '\0';
	return (str);
}
