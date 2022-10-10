/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awooden <awooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:21:15 by awooden           #+#    #+#             */
/*   Updated: 2021/10/20 17:33:13 by awooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static
	int	calc_digits(int n)
{
	int	res;

	res = 0;
	while (n != 0)
	{
		n /= 10;
		res++;
	}
	return (res);
}

static
	char	*make_str(int n, int divider, int len)
{
	int		i;
	char	*res;

	i = 0;
	if (n <= 0)
		res = malloc(sizeof(char) * (len + 2));
	else
		res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		res[i++] = '-';
	}
	while (divider > 0)
	{
		res[i++] = n / divider + '0';
		n %= divider;
		divider /= 10;
	}
	res[i] = 0;
	return (res);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	int		divider;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = calc_digits(n);
	i = 0;
	divider = 1;
	while (++i < len)
		divider *= 10;
	return (make_str(n, divider, len));
}
