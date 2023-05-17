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


/*char    *itoa(int n)
{
    
}*/

int	main(void)
{
	char str[] = "waterlow est cool";
	int len = 17;
	reversestr(str, len);
	printf("%s\n", str);
}
