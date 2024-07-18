/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:18:52 by achat             #+#    #+#             */
/*   Updated: 2024/07/15 14:19:08 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int ft_is_prime(int nb)
// {
//     int i;
//     int flag;
//     i = 2;
//     flag = 0;
//     if (flag == 0 || nb == 1)
//     {
//         flag = 1;
//     }
//     while (i <= nb / 2)
//     {
//         if (nb % i == 0)
//         {
//             flag = 1;
//             break;
//         }
//         i++;
//     }
//     if (flag == 0)
//     {
//         return (0);
//     }
//     else if (flag == 1)
//     {
//         return (1);
//     }
//     return (0);
// }
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
