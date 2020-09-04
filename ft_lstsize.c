/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcronus <lcronus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:35:13 by lcronus           #+#    #+#             */
/*   Updated: 2020/05/18 16:30:54 by lcronus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t len;

	len = 0;
	if (lst != NULL)
	{
		len = 1;
		while ((lst = lst->next) != NULL)
			len++;
	}
	return (len);
}
