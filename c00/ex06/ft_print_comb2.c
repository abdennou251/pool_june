/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:34:20 by achat             #+#    #+#             */
/*   Updated: 2024/06/27 17:34:48 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar2(char c)
{
	c = c + 48;
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putchar2(i / 10);
			ft_putchar2(i % 10);
			write (1, " ", 1);
			ft_putchar2(j / 10);
			ft_putchar2(j % 10);
			if (i < 98)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
