/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcronus <lcronus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:27:51 by lcronus           #+#    #+#             */
/*   Updated: 2020/05/09 17:19:29 by lcronus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	first;
	unsigned char	last;

	if (n > 0)
	{
		i = 0;
		while (i < n)
		{
			first = *(unsigned char*)(s1 + i);
			last = *(unsigned char*)(s2 + i);
			if (first != last)
				return (first - last);
			i++;
		}
	}
	return (0);
}
