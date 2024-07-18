/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:33:22 by achat             #+#    #+#             */
/*   Updated: 2024/07/09 19:23:18 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
