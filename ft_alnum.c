/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcarpio- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 17:08:38 by rcarpio-          #+#    #+#             */
/*   Updated: 2024/09/26 19:16:10 by rcarpio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalpha(int c)
{
	int	r;

	r = 1;
	if (!(c >= 65 && c <= 90) && !(c >= 97 && c <= 122))
		r = 0;
	return (r);
}

int	ft_isdigit(int c)
{
	int	r;

	r = 1;
	if (c < 48 || c > 57)
		r = 0;
	return (r);
}

int	ft_isalnum(int c)
{
	int	r;

	r = 0;
	if (ft_isalpha(c) || ft_isdigit(c))
		r = 1;
	return (r);
}
