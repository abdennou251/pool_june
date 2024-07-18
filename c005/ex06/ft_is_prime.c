/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:02:54 by achat             #+#    #+#             */
/*   Upd``Qated: 2024/07/09 18:34:22 by achat            ###   ########.fr       */
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
