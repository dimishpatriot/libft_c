/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcronus <lcronus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 18:57:42 by lcronus           #+#    #+#             */
/*   Updated: 2020/05/09 17:19:30 by lcronus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(str) + 1;
	while (i < len && str[i] != c)
		i++;
	if (i == len)
		return (NULL);
	else
		return ((char *)(str + i));
}
