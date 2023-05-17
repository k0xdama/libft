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
	int	isneg;
	int	nb;

	nb = n;
	isneg = 0;
	if (nb < 0)
	       return (isneg += 1);
	return (0);	
}

char	*ft_itoa(int n)
{
	int	i;
	int	count;
	int	nb;
	int	d;

	nb = n;
	nb = nb * -1;
	count = 0;
	while (nb != 0)
	{
		nb /= 10;
		count++;
	}
	if (isneg(n) == 1)
		count = count + 1;
	char	str[count + 1];;

	i = 0;
	while (nb != 0)
	{
		d = nb % 10;
		str[i] = d + 48;
		nb = nb / 10;
		i++;
	}
	if (isneg(n) == 1)
		str[i++] = '-';
	str[i] = '\0';
	reversestr(str, i);
	return (str);

}
int	main(void)
{
	int nb = -4200;
	printf("ma fonction retourne : %s\n", ft_itoa(nb));
	return (0);
}
