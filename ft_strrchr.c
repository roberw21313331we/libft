/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:15:15 by rcarpio-          #+#    #+#             */
/*   Updated: 2024/10/08 21:15:45 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s)
		s++;
	if (c == 0)
		return ((char *)s);
	while (s >= 0)
	{
		if (*s == c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}


