/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 02:19:29 by pmateo            #+#    #+#             */
/*   Updated: 2023/07/01 20:16:01 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ldest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	ldest = i;
	if (size <= i)
		return (ft_strlen(src) + size);
	while (src[j] != '\0' && i < (size - 1))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size <= ldest)
		return (ft_strlen(src) + size);
	else
		return (ft_strlen(src) + ldest);
}

// int	main(void)
// {
// 	char *src = "AAAAAAAAA";
// 	char dest[30];
// 	ft_memset(dest, 0, 30);
// 	ft_memset(dest, 'B', 4);
// 	printf("ma fonction renvoie %ld\n", ft_strlcat(dest, src, 6));
// 	printf("la nouvelle chaine dest est %s\n", dest);
// }
