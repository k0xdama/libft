/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 22:20:32 by pmateo            #+#    #+#             */
/*   Updated: 2023/06/20 22:20:32 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlen(const char *str)
// {
// 	size_t	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	return (i);
// }

// unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
// {
// 	unsigned int	i;

// 	i = 0;
// 	if (size == 0)
// 		return (ft_strlen(src));
// 	while (src[i] != '\0' && i < size - 1)
// 	{
// 		dest[i] = src[i];
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (ft_strlen(src));
// }

// char	*ft_substr(const char *src, unsigned int start, size_t len)
// {
// 	char	*str;
// 	size_t	strlen;
	
// 	if (!src)
// 		return(NULL);
// 	if (start > ft_strlen(src))
// 	{
// 		str = malloc(sizeof(char));
// 		if (!str)
// 			return (NULL);
// 		str[0] = '\0';
// 		return (str);
// 	}
// 	else
// 	{
// 		strlen = len;
// 		if (ft_strlen(src + start) < len)
// 			strlen = ft_strlen(src + start);
// 		str = malloc((strlen + 1) * sizeof(char));
// 		if (!str)
// 			return (NULL);
// 		ft_strlcpy(str, src + start, strlen + 1);
// 		return (str);
// 	}
// }

int	count_substr(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(s[i] != '\0')
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
		{
			j++;
			i++;
		}
		else
			i++;
	}
	return (j);
}

void	extract_and_fill(char **tab, char const *s, char c)
{
	char **ptab;
	char const *tmp;

	ptab = tab;
	tmp = s;
	while (*tmp)
	{
		while (*tmp == c)
			tmp++;
		s = tmp;
		while (*s != '\0' && *s != c)
			s++;
		if (s > tmp || *s == c)
		{
			*ptab = ft_substr(tmp, 0, s - tmp);
			tmp = s;
			ptab++;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	size;

	if (!s)
		return (NULL);
	size = count_substr(s, c);
	tab = malloc((size + 1) * sizeof(char **));
	if (!tab)
		return (NULL);
	extract_and_fill(tab, s, c);
	tab[size + 1] = NULL;
	return (tab);
}

// int	main(void)
// {
// 	char *s = "j'ai des hemorroides";
// 	char c = 32;
// 	char **tab = ft_split(s, c);
// 	int i = 0;
// 	while (tab[i])
// 		printf("%s\n", tab[i++]);
// }
