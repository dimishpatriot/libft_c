/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcronus <lcronus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:00:18 by lcronus           #+#    #+#             */
/*   Updated: 2020/05/29 09:03:22 by lcronus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (len == 0 || start > ft_strlen(s) - 1)
		return (ft_strdup(""));
	else
		substr = (char*)malloc(sizeof(char) * (len + 1));
	if (substr != NULL)
	{
		i = start;
		while (s[i] != '\0' && i < (start + len))
		{
			substr[i - start] = s[i];
			i++;
		}
		substr[i - start] = '\0';
	}
	return (substr);
}
