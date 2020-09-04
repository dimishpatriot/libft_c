/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcronus <lcronus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:20:53 by lcronus           #+#    #+#             */
/*   Updated: 2020/05/21 08:39:35 by lcronus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			*(char*)(dest + i) = *(char*)(src + i);
			if (*(char*)(dest + i) == (char)c)
				return ((void*)(dest + i + 1));
			i++;
		}
	}
	return (NULL);
}
