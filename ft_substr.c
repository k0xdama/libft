/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u4s2e0r <u4s2e0r@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 10:54:57 by u4s2e0r           #+#    #+#             */
/*   Updated: 2023/05/30 10:55:59 by u4s2e0r          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *src, unsigned int start, size_t len)
{
	int	size;
	int	i;
	int	j;
	
	size = len;
	i = start - 1;;
	j = 0;
	char *str = malloc(size * sizeof(char));
	while (j < size - 1)
	{
		str[j] = src[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}

// int	main(void)
// {
// 	const char *src = "machinbiduletruc";
// 	int start = 13;
// 	int len = 5;
// 	printf("la fonction ft_substr renvoie %s\n", ft_substr(src, start, len));
// 	return (0);
// }
