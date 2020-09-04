/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcronus <lcronus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:29:44 by lcronus           #+#    #+#             */
/*   Updated: 2020/05/09 20:45:23 by lcronus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	i;
	char	*buf;
	int		num;

	i = 1;
	num = n;
	while ((num /= 10) != 0)
		i++;
	if (n < 0)
		i++;
	if ((buf = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	if ((buf[i--] = '\0') == '\0' && n == 0)
		buf[i] = '0';
	if (n < 0 && (num = n % 10) <= 0 && (n /= -10) >= 0)
	{
		buf[i--] = (char)(num * (-1) + '0');
		buf[0] = '-';
	}
	while (n > 0)
	{
		buf[i--] = (char)(n % 10 + '0');
		n /= 10;
	}
	return (buf);
}
