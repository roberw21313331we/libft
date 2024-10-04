/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:37:12 by rcarpio-          #+#    #+#             */
/*   Updated: 2024/09/26 19:08:36 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*pts;

	pts = s;
	i = 0;
	while (pts[i] != '\0' && i < n)
	{
		pts[i] = 0;
		i++;
	}
	return (s);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr != NULL)
		return (ft_bzero(ptr, (nmemb * size)));
	return (0);
}
