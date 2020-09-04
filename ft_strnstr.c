/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcronus <lcronus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:24:34 by lcronus           #+#    #+#             */
/*   Updated: 2020/05/21 08:39:35 by lcronus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	if (ft_strlen(little) == 0)
		return ((char*)big);
	if (ft_strlen(big) == 0 || len == 0)
		return (NULL);
	i = 0;
	while (i < len)
	{
		if (*(big + i) == *little)
		{
			if (ft_strlen(little) + i <= len)
			{
				if (ft_strncmp((big + i), little, ft_strlen(little)) == 0)
					return ((char*)(big + i));
			}
		}
		i++;
	}
	return (NULL);
}
