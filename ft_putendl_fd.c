/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcronus <lcronus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:30:29 by lcronus           #+#    #+#             */
/*   Updated: 2020/05/21 10:37:45 by lcronus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	str_len;
	char	endl;

	if (!fd || !s)
		return ;
	str_len = ft_strlen(s);
	write(fd, s, str_len);
	endl = '\n';
	write(fd, &endl, 1);
}
