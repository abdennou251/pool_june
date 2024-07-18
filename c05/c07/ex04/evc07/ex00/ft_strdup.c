/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <achat@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:05:17 by achat             #+#    #+#             */
/*   Updated: 2024/07/13 10:19:58 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		j;

	j = 0;
	new = (char *) malloc (sizeof(char) * ft_strlen(src));
	if (!new)
	{
		return (NULL);
	}
	while (src[j])
	{
		new[j] = src[j];
		j++;
	}
	new[j] = '\0';
	return (new);
}
