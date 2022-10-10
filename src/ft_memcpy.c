/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awooden <awooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:18:00 by awooden           #+#    #+#             */
/*   Updated: 2021/10/20 17:33:13 by awooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tmp;

	if (dst == src)
		return (dst);
	tmp = (char *)dst;
	while (n-- > 0)
		*tmp++ = *((char *)src++);
	return (dst);
}
