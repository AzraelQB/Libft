/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awooden <awooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:54:26 by awooden           #+#    #+#             */
/*   Updated: 2021/10/19 19:40:47 by awooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	l;
	size_t	dsize;
	size_t	ssize;

	dsize = ft_strlen(dst);
	ssize = ft_strlen(src);
	if (dstsize <= dsize)
		return (dstsize + ssize);
	i = dsize;
	l = dstsize;
	while (l - dsize - 1 > 0 && *src)
	{
		dst[i++] = *src;
		src++;
		l--;
	}
	if (dstsize >= 0 && dsize < dstsize)
		dst[i] = '\0';
	return (dsize + ssize);
}
