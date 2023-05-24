/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:13:42 by pmateo            #+#    #+#             */
/*   Updated: 2023/05/24 20:18:00 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char const *src, unsigned int start, unsigned int end)
{
	int		i;
	size_t	size;
	char	*dest;

	i = 0;
	size = end - start;
	dest = malloc(sizeof(char) * (size + 1));
	while (start < end)
	{
		dest[i] = src[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			j = 0;
			i++;
		}
		else
			j++;
	}
	start = i;
	i = ft_strlen(s1) - 1;
	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i] == set[j])
		{
			j = 0;
			i--;
		}
		else
			j++;
	}
	return (ft_strcpy(s1, start, i + 1));
}

// int	main(void)
// {
// 	char *s1 = "aifh42045eda";
// 	char *set = "abcdefghijk";
// 	char *res = ft_strtrim(s1, set);
// 	printf("ft_strtrim renvoie : %s\n", res);
// 	free(res);
// }