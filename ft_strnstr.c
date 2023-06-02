/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: u4s2e0r <u4s2e0r@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:41:27 by pmateo            #+#    #+#             */
/*   Updated: 2023/06/02 02:18:07 by u4s2e0r          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *str, const char *tofind, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if(!tofind)
		return ((char *)str);
	while (str[i] != '\0' && i < n)
	{
		if (str[i + j] == tofind[j] && i + j < n)
			j++;
		else if (tofind[j] == '\0')
			return ((char *)str + i);
		else
		{
			i++;
			j = 0;
		}
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char *str = "trouvemoi";
// 	const char *tofind = "moi";
// 	printf("ft_strnstr retourne %s", ft_strnstr(str, tofind, 9));
// }