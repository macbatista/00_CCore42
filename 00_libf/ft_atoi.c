/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:27:53 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/16 10:16:53 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int	sign;
	int	value;

	value = 0;
	i = 0;
	sign = 1;
	while (((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32) && nptr[i])
		i++;
	if ((nptr[i] == '-' || nptr[i] == '+') && nptr[i])
	{
		if (nptr[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i])
	{
		value = (value * 10) + (nptr[i] - 48);
		i++;
	}
	return (value *= sign);
}

/*  int	main(int argc, char **argv)
{
	char	min[] = "-2147483648";
	char	max[] = "21474836479";

	if (argc > 1)
	{
		printf("Feito     : %d \n", ft_atoi(argv[1]));
		printf("Feito     : %d \n", ft_atoi(min));
		printf("Feito     : %d \n", ft_atoi(max));
		printf("Feito     : %d \n", ft_atoi(argv[1]));
		printf("Verdadeiro: %d \n", atoi(min));
		printf("Verdadeiro: %d \n", atoi(max));
		printf("Verdadeiro: %d \n", atoi(argv[1]));
	}
} */
