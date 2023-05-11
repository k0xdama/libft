/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 05:35:19 by pmateo            #+#    #+#             */
/*   Updated: 2023/05/11 11:05:47 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if ((str[i] == 43 || str[i] == 45) && (str[i+1] >= '0' && str[i+1] <= '9'))
	{
		if (str[i] == 43)
			i++;
		else
		{
			sign = sign * -1;
			i++;
		}
	}
	else
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	main(void)
{
	char *str = "  -4234bd";
	printf("ma fonction renvoie %d\n", ft_atoi(str));
	printf("la fonction de base renvoie %d", atoi(str));
}
