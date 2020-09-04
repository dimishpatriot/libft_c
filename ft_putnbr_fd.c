/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcronus <lcronus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:30:48 by lcronus           #+#    #+#             */
/*   Updated: 2020/05/29 09:10:34 by lcronus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (fd)
	{
		c = '-';
		if (n < 0)
		{
			c = '-';
			write(fd, &c, 1);
			if (n == INT_MIN)
			{
				ft_putnbr_fd((n / 10) * (-1), fd);
				ft_putnbr_fd((n % 10) * (-1), fd);
				return ;
			}
			else
				n = -n;
		}
		if (n >= 10)
			ft_putnbr_fd(n / 10, fd);
		c = n % 10 + '0';
		write(fd, &c, 1);
	}
}
