/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 02:23:19 by pmateo            #+#    #+#             */
/*   Updated: 2023/05/16 05:02:05 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *src, unsigned int start, size_t len)
{
	int	size;
	int	i;
	int	j;
	
	size = len + 1;
	i = start;
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

char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return ((char *)str + i);
		else
			i++;
	}
	if (str[i] == c)
		return ((char *)str + i);
	return (NULL);
}

int	count_substr(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(s[i] != '\0')
	{
		if (s[i] = c)
		{
			j++;
			i++;
		}
		else
			i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	size;
	size_t	i;

	if (!s)
		return (NULL);
	size = count_substr(s, c);
	tab = malloc((size + 1) * sizeof(char **));
	if (!tab)
		return (NULL);
	tab[size] = NULL;
	while (tab[i])
	{
		tab[i] = ft_substr()
	}
}

int	main(void)
{
	char *s = "j'ai des hemoroides";
	char *c = " ";
	char **tab = ft_split(s, c);
	int i = 0;
	while (tab[i])
		printf("%s\n", tab[i++]);
}
