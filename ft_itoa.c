/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:45:13 by rcarpio-          #+#    #+#             */
/*   Updated: 2024/10/03 15:45:15 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_nlen(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	m;
	int		d;

	d = ft_nlen(n);
	str = (char *)malloc(d + 1);
	if (!str)
		return (NULL);
	m = n;
	if (n < 0)
	{
		m = -n;
	}
	str[d] = '\0';
	while (d--)
	{
		str[d] = (m % 10) + 48;
		m = m / 10;
	}
	if (n < 0)
		str [0] = '-';
	return (str);
}

// int	main(void)
// {
// 	printf("%s\n",ft_itoa(0));
// 	printf("%s\n",ft_itoa(1234));
// 	printf("%s\n",ft_itoa(-31123));
// 	printf("%s\n",ft_itoa(-10));
// 	printf("%s\n",ft_itoa(-1));
// 	return (0);
// }