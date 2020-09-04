/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcronus <lcronus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:31:28 by lcronus           #+#    #+#             */
/*   Updated: 2020/05/21 10:36:43 by lcronus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	str_len;

	if (!fd || !s)
		return ;
	str_len = ft_strlen(s);
	write(fd, s, str_len);
}
