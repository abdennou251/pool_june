/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achat <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:15:24 by achat             #+#    #+#             */
/*   Updated: 2024/07/06 12:32:33 by achat            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*f;

	if (!*to_find)
	{
		return (str);
	}
	while (*str)
	{
		s = str;
		f = to_find;
		while (*s && *f && (*s == *f))
		{
			s++;
			f++;
		}
		if (!*f)
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
