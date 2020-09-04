/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcronus <lcronus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:32:35 by lcronus           #+#    #+#             */
/*   Updated: 2020/05/29 13:23:44 by lcronus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	first;
	size_t	last;
	size_t	i;

	if (s1 == NULL || set == NULL)
		return (ft_strdup(""));
	first = 0;
	last = ft_strlen(s1) - 1;
	i = 0;
	while (set[i] != '\0' && first <= last)
	{
		if (s1[first] == set[i] && (i = 0) == 0)
			first++;
		else if (s1[last] == set[i] && (i = 0) == 0)
			last--;
		else
			i++;
	}
	if ((str = (char *)malloc(sizeof(char) * (last + 2 - first))) != NULL)
		ft_strlcpy(str, s1 + first, last + 2 - first);
	return (str);
}
