/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnfind.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awooden <awooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:36:50 by awooden           #+#    #+#             */
/*   Updated: 2022/03/07 18:45:14 by awooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnfind(char *str, char **str_arr, int n)
{
	int i;

	i = 0;
	if (!str || !str_arr)
		return (0);
	while (*str_arr)
	{
		if (ft_strncmp(str, *str_arr, n) == 0)
			return (i);
		str_arr++;
		i++;
	}
	return (0);
}
