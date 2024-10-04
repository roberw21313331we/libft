/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:33:36 by rcarpio-          #+#    #+#             */
/*   Updated: 2024/09/26 19:55:55 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = dest;
	s = src;
	if (d > s && d < s + n)
	{
		i = n;
		while (i > 0)
		{
			d[i -1] = s[i -1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d [i] = s [i];
			i++;
		}
	}
	return (dest);
}
