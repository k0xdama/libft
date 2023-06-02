/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 05:34:52 by pmateo            #+#    #+#             */
/*   Updated: 2023/06/02 02:50:31 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i > 0)
	{
		if (str[i] == c)
			return ((char *)str + i);
		i--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *str = "oncherchelecdanstoncu";
// 	int c = 'c';
// 	printf("strrchr retourne : %s\n", ft_strrchr(str, c));
// }