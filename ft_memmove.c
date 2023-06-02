/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u4s2e0r <u4s2e0r@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 22:45:32 by u4s2e0r           #+#    #+#             */
/*   Updated: 2023/06/02 01:14:53 by u4s2e0r          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pdest_last;
	const unsigned char	*psrc_last;

	pdest_last = dest + (n - 1);
	psrc_last = src + (n - 1);

	if (dest > src)
	{
		while(n--)
		{
			((unsigned char *)pdest_last)[n] = ((unsigned char *)psrc_last)[n];
		}	
	}
	
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

 int	main(void)
 {
	const char *src = "lowris niwque taw rwace";
	char dest [] = "truc muche";
	printf("dest était %s\n", dest);
	ft_memmove(dest, src, 30);
	printf("dest est maintenant : %s\n", dest);
 }