/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 06:27:16 by marvin            #+#    #+#             */
/*   Updated: 2023/05/16 06:27:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char *ps;
	unsigned char toput;
	size_t	i; /*tester sans, en décrementant n dans la boucle*/

	ps = (unsigned char *)s;
	toput = (unsigned char *)c;
	i = 0;
	while (i < n)
	{
		*ps = toput;
		ps++;
		i++;
	}
	return (s); /*tester avec *s voir ce que cela renvoie */
}
int	main(void)
{
	char	str[20];

	memset(str, 'a', sizeof(str));
}