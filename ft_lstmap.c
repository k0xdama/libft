/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:47:45 by pmateo            #+#    #+#             */
/*   Updated: 2023/07/02 22:22:53 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lstres;
	t_list	*cell;

	lstres = NULL;
	while (lst != NULL)
	{
		cell = ft_lstnew(f(lst->content));
		if (!cell)
		{
			ft_lstclear(&lstres, del);
			return (NULL);
		}
		ft_lstadd_back(&lstres, cell);
		lst = lst->next;
	}
	return (lstres);
}