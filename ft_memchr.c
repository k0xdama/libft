/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 22:35:52 by pmateo            #+#    #+#             */
/*   Updated: 2023/05/15 22:39:05 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *mb, int schar, size_t n)
{
	const unsigned char *pmb;
	unsigned char pschar;
	size_t	i;

	i = 0;
	pmb = (const unsigned char *)mb;
	pschar = (unsigned char )schar;
	while (i < n)
	{
		if (pmb[i] == pschar)
			return((void *)&pmb[i]);
		i++;
	}
	return(NULL);
}
/*a tester avec schar a +255 ou avec un negatif*/
int	main(void)
{
	int	schar = 't';
}