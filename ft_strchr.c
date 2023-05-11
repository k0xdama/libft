/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 05:33:59 by pmateo            #+#    #+#             */
/*   Updated: 2023/05/11 09:24:19 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strchr(const char *str, int c)
{
	char	cc;
	int	i;

	cc = c + '0';
	i = 0;
	while (str[i] !='\0')
	{
		if (str[i] == cc)
			return (str[i]);
		else
			i++;
	}
	if (str[i] == '\0')
		return (NULL);
/*t'as mal compris apparemment, la fonction retourne un pointeur vers l'occurence mais la suite de la string vient avec*/
}

int	main(void)
{
	int c = 't';
	char *str = "carapute";
	printf("ma fonction retourne %s", ft_strchr(str, c));
	printf("la fonction de base retourne %s", strchr(str, c));
}
