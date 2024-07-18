/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 16:43:13 by achat             #+#    #+#             */
/*   Updated: 2024/06/30 17:30:20 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	div_fun(int i, int j, int x, int y)
{
	if (i == 0 && j == 0)
		ft_putchar('o');
	else if (i == 0 && j == x - 1)
		ft_putchar('o');
	else if (i == y - 1 && j == 0)
		ft_putchar('o');
	else if (i == y - 1 && j == x - 1)
		ft_putchar('o');
	else if (i == 0 || i == y - 1)
		ft_putchar('-');
	else if (j == 0 || j == x - 1)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x >= 0 && y >= 0)
	{
		while (i < y)
		{
			j = 0;
			while (j < x)
			{
				div_fun(i, j, x, y);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}
