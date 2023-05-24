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

#include <stdlib.>
#include <stdio.h>

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

	 tab = malloc(sizeof(counst_substr(s, c) + 1));

}

// int	main(void)
// {
// 	char *s = "j'ai des hemoroides";
// 	char *c = " ";
// 	printf("ft_split renvoie %s", ft_split(s, c));
// }
