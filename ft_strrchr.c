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
	int	last;
	int	i;
	char	*str;
	char	*r;

	str = (char *)s;
	last = -1;
	i = 0;
	while(s[i])
	{
		if (s[i] == c)
			last = s[i];
		i++;
	}
	if(last == -1)
		return (NULL);
	r = &str[i];
	return (r);
}
