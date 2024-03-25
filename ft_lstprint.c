/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 02:52:47 by pmateo            #+#    #+#             */
/*   Updated: 2024/03/25 02:53:24 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "INCLUDES/libft.h"

void	ft_lstprint(t_list *lst)
{
	while(lst)
	{
		printf("&cell = %p\n", lst);
		// % A CHANGER SELON LE TYPE DE DONNEES
		printf("content_cell = %d\n", *((int *)lst->content));
		printf("&next_cell = %p\n", lst->next);
		printf("|\n|\n|\n");
		lst = lst->next;
	}
	printf("&cell = NULL\n");
	printf("content_cell = NULL\n");
	printf("&next_cell = NULL\n");
}