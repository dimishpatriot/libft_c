/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcronus <lcronus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:31:23 by lcronus           #+#    #+#             */
/*   Updated: 2020/05/29 11:53:48 by lcronus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nwords(const char *s, char c)
{
	size_t	str_len;
	size_t	n_words;
	size_t	i;
	size_t	inw;

	n_words = 0;
	inw = 0;
	i = 0;
	str_len = ft_strlen(s);
	while (i < str_len)
	{
		if (inw == 0 && s[i] != c)
		{
			n_words++;
			inw = 1;
		}
		else if (inw == 1 && s[i] == c)
			inw = 0;
		i++;
	}
	return (n_words);
}

static void		ft_getborders(const char *s, char c, size_t *sw, size_t *ew)
{
	while (s[*sw] != '\0' && s[*sw] == c)
		(*sw)++;
	*ew = *sw;
	while (s[*ew] != '\0' && s[*ew] != c)
		(*ew)++;
}

static void		ft_freearr(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i] != NULL)
		free(arr[i++]);
	free(arr);
}

static size_t	ft_fillarr(char **arr, char *s, size_t i, size_t len)
{
	arr[i] = (char*)malloc(sizeof(char) * (len + 1));
	if (arr[i] != NULL)
	{
		ft_strlcpy(arr[i], s, len);
		return (++i);
	}
	else
	{
		ft_freearr(arr);
		return (0);
	}
}

char			**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	n_words;
	size_t	sw;
	size_t	ew;
	size_t	i;

	if (!s)
		return (ft_calloc(1, sizeof(char*)));
	n_words = ft_nwords(s, c);
	if ((arr = (char**)malloc(sizeof(char*) * (n_words + 1))) != NULL)
	{
		i = 0;
		sw = 0;
		ew = sw;
		while (i < n_words)
		{
			ft_getborders(s, c, &sw, &ew);
			if ((i = ft_fillarr(arr, (char*)(s + sw), i, ew - sw + 1)) == 0)
				break ;
			else
				sw = ew;
		}
		arr[i] = NULL;
	}
	return (arr);
}
