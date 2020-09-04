/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcronus <lcronus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:11:01 by lcronus           #+#    #+#             */
/*   Updated: 2020/05/21 08:39:35 by lcronus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getsign(const char *nptr, size_t *i)
{
	if (*(nptr + *i) == '-' && ft_isdigit(*(nptr + *i + 1)))
	{
		(*i)++;
		return (-1);
	}
	else if (*(nptr + *i) == '+' && ft_isdigit(*(nptr + *i + 1)))
		(*i)++;
	return (1);
}

int			ft_atoi(const char *nptr)
{
	long	num;
	int		sign;
	int		next;
	size_t	i;

	i = 0;
	while (*(nptr + i) == ' ' || (*(nptr + i) >= '\b' && *(nptr + i) <= '\r'))
		i++;
	sign = ft_getsign(nptr, &i);
	num = 0;
	while (ft_isdigit(*(nptr + i)))
	{
		next = *(nptr + i) - '0';
		if (sign == 1)
			if (next > (LONG_MAX - num * 10))
				return (-1);
		if (sign == -1)
			if (next < (num * 10 + LONG_MIN))
				return (0);
		num = num * 10 + next;
		i++;
	}
	return (num * sign);
}
