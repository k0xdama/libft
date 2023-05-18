/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 02:56:20 by pmateo            #+#    #+#             */
/*   Updated: 2023/05/16 05:02:01 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void    reversestr(char *str, int len)
{
    int     i;
    int     j;
    char    tmp;
    
    i = 0;
    j = len - 1;
    while (i < j)
    {
        tmp = str[i];
	str[i] = str[j];
	str[j] = tmp;
	i++;
	j--;
    }
}

int	isneg(int n)
{
	if (n < 0)
	       return (1);
	return (0);
}

char	*ft_itoa(int n)
{
	int	i;
	int	count;
	int	nb;
	int	d;
	int	size;

	nb = n;
	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	size = count + isneg(nb) + 1;
	char	*str = malloc(sizeof(size));
	if (str == NULL)
		return(NULL);
	if (isneg(nb) == 1)
                str[size - 2] = '-';
	nb = nb * -1;
	i = 0;
	while (nb != 0)
	{
		d = nb % 10;
		str[i] = d + 48;
		nb = nb / 10;
		i++;
	}
	str[i + 1] = '\0';
	reversestr(str, i + 1);
	return (str);

}
int	main(void)
{
	int nb = -4200;
	printf("ma fonction retourne : %s\n", ft_itoa(nb));
	return (0);
}
