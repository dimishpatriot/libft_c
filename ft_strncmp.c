/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcronus <lcronus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:24:10 by lcronus           #+#    #+#             */
/*   Updated: 2020/05/21 08:39:35 by lcronus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	first;
	unsigned char	second;

	i = 0;
	while (i < n)
	{
		first = *(s1 + i);
		second = *(s2 + i);
		if (first == '\0' && second != '\0')
			return (-1);
		if (first == '\0' && second == '\0')
			return (0);
		if (second == '\0')
			return (1);
		if (first != second)
			return (first - second);
		i++;
	}
	return (0);
}
