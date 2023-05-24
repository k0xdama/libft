/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 05:33:59 by pmateo            #+#    #+#             */
/*   Updated: 2023/05/24 19:41:22 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	cc;
	int		i;

	cc = c + '0';
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == cc)
			return (str[i]);
		else
			i++;
	}
	if (str[i] == '\0')
		return (NULL);
}
// verifie les valeurs de retours
// 
// int	main(void)
// {
// 	int c = 't';
// 	char *str = "carapute";
// 	printf("ma fonction retourne %s", ft_strchr(str, c));
// 	printf("la fonction de base retourne %s", strchr(str, c));
// }
