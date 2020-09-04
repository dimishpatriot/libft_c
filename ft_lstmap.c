/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcronus <lcronus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:34:49 by lcronus           #+#    #+#             */
/*   Updated: 2020/05/20 09:28:06 by lcronus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*ptr_new;

	lst_new = ft_lstnew(f(lst->content));
	if (lst_new == NULL)
	{
		ft_lstclear(&lst_new, del);
		return (NULL);
	}
	ptr_new = lst_new;
	while ((lst = lst->next) != NULL)
	{
		lst_new->next = ft_lstnew(f(lst->content));
		if (lst_new->next == NULL)
		{
			ft_lstclear(&lst_new, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_new, lst_new->next);
		lst_new = lst_new->next;
	}
	lst_new->next = NULL;
	lst_new = ptr_new;
	return (lst_new);
}
