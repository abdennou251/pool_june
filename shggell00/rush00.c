/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 17:54:56 by achat             #+#    #+#             */
/*   Updated: 2024/06/29 18:01:17 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void    div_fun(int i, int j, int x, int y)
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

void    rush(int x, int y)
{
    int i;
    int j;

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
int main(void)
{
	rush(5, 3);
}
