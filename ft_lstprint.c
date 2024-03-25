/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 02:52:47 by pmateo            #+#    #+#             */
/*   Updated: 2024/03/25 04:07:35 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "INCLUDES/libft.h"

void	ft_lstprint(t_list *lst)
{
	while(lst)
	{
		ft_printf("&cell = %p\n", lst);
		// % A CHANGER SELON LE TYPE DE DONNEES
		ft_printf("content_cell = %d\n", *((int *)lst->content));
		ft_printf("&next_cell = %p\n", lst->next);
		ft_printf("|\n|\n|\n");
		lst = lst->next;
	}
	ft_printf("&cell = NULL\n");
	ft_printf("content_cell = NULL\n");
	ft_printf("&next_cell = NULL\n");
}