/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:07:45 by pmateo            #+#    #+#             */
/*   Updated: 2023/05/24 20:09:49 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(const char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	cpy(const char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
}

char	*ft_strdup(const char *str)
{
	size_t	size;
	char	*s2;

	size = len(s1) + 1;
	s2 = malloc(sizeof(size));
	if (s2 == NULL)
		return (NULL);
	cpy(s1, s2);
	return (s2);
}

// int	main(void)
// {
// 	char *str = "copiemoi";
// 	printf("ma version renvoie %s\n", ft_strdup(str));
// 	printf("la vraie version renvoie %s", strdup(str));
// 	return (0);
// }