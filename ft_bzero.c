/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:43:55 by pmateo            #+#    #+#             */
/*   Updated: 2023/05/24 19:25:18 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ps;

	ps = (unsigned char *)s;
	while (n--)
	{
		*ps = 0;
		ps++;
	}
}

// int main(void)
// {
//     char s[10] = "trucmachin";
//     ft_bzero(s, 4);
//     int i = 0;
//     while(i < 10)
//     {
//         printf("%c\n", s[i]);
//         i++;
//     }
// }