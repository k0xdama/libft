/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 22:35:52 by pmateo            #+#    #+#             */
/*   Updated: 2023/05/24 19:44:28 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *mb, int c, size_t n)
{
	const unsigned char	*pmb;
	size_t				i;

	i = 0;
	pmb = (const unsigned char *)mb;
	while (i < n)
	{
		if (pmb[i] == c)
			return ((void *)&pmb[i]);
		i++;
	}
	return (NULL);
}
/*a tester avec schar a +255 ou avec un negatif*/
// int	main(void)
// {
// 	int	schar = 't';
// }