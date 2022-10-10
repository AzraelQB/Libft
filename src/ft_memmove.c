/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awooden <awooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:17:16 by awooden           #+#    #+#             */
/*   Updated: 2021/10/20 17:33:13 by awooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tmp;

	tmp = (char *)dst;
	if (dst == src)
		return (dst);
	if (src >= dst)
	{
		while (n-- > 0)
			*(tmp++) = *((char *)src++);
	}
	else
	{
		while (n-- > 0)
			tmp[n] = ((char *)src)[n];
	}
	return (dst);
}
