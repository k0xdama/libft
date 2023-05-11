/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 02:19:29 by pmateo            #+#    #+#             */
/*   Updated: 2023/05/11 09:23:08 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (ft_strlen(dest) + ft_strlen(src));
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && i <= (size - 1))/*il faudrait trouver pq ce n'est pas pareil que strlcpy*/
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest));/*si size est < que dest la fonction retourne size, normal ? */
}
/*strlcat devrait retourner la taille initial de dest...et il est bien possible de la tester, l'argument bsd vient apres le fichier*/

int	main(void)
{
	char src[] = "World";
	char dest[255] = "Hello";
	printf("ma fonction renvoie %d\n", ft_strlcat(dest, src, 15));
	printf("la nouvelle chaine dest est %s\n", dest);
}
