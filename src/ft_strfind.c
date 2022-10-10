/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awooden <awooden@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:44:44 by awooden           #+#    #+#             */
/*   Updated: 2022/03/07 18:45:14 by awooden          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strfind(char *str, char **str_arr)
{
	if (!str || !str_arr)
		return (0);
	while (*str_arr)
	{
		if (ft_strcmp(str, *str_arr) == 0)
			return (1);
		str_arr++;
	}
	return (0);
}
