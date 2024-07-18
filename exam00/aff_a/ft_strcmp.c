/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 10:37:26 by achat             #+#    #+#             */
/*   Updated: 2024/06/28 10:46:32 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while(*s1[i] != '/0' && *s2[i] != '/0' && *s1[i] == *s2[i])
	i++;
		return (*s1[i] - *s2[i]);
}
