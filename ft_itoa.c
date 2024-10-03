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

int	ft_nlen(int	n)
{
	int	i;
	
	if (n < 0)
	n *=-1;
	i = 1;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	char	*str;
	long	m;
	int		d;
	
	d = ft_nlen(n);
	str = (char *)malloc(d+1);
	m = n;
	while (d > 0)
	{

		 d--;
	}


}

int	main(void)
{
	printf("%d",ft_nlen(-1234));
	return (0);
}