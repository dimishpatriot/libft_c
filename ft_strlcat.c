/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcronus <lcronus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:22:55 by lcronus           #+#    #+#             */
/*   Updated: 2020/05/24 19:05:55 by lcronus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_l;
	size_t	src_l;

	dst_l = ft_strlen(dst);
	if (*dst == '\0')
		src_l = ft_strlcpy(dst, src, size);
	else
	{
		i = 0;
		while (*(dst + i) != '\0')
		{
			if (i == size)
				return (size + ft_strlen(src));
			i++;
		}
		src_l = ft_strlcpy(dst + i, src, size - dst_l);
	}
	return (dst_l + src_l);
}
