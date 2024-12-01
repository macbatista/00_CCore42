/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 15:27:53 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/30 23:14:08 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		sign;
	long	value;
	long	prev_value;

	value = 0;
	i = 0;
	sign = 1;
	while (((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32) && nptr[i])
		i++;
	if ((nptr[i] == '-' || nptr[i] == '+') && nptr[i])
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9' && nptr[i])
	{
		prev_value = value;
		value = (value * 10) + (nptr[i] - '0');
		if (value < prev_value)
			return (-1);
		i++;
	}
	return ((int)(value * sign));
}

/*  int	main(void)
{
	printf("9Verdadeiro: %d \n", 	atoi("1111111111"));
	printf("9Feito     : %d \n", ft_atoi("1111111111"));
	printf("10Verdadeiro: %d \n", 		atoi("11111111111"));
	printf("10Feito     : %d \n", ft_atoi("11111111111"));
	printf("11Verdadeiro: %d \n", 		atoi("111111111111"));
	printf("11Feito     : %d \n", ft_atoi("111111111111"));
	printf("12Verdadeiro: %d \n", 		atoi("1111111111111"));
	printf("12Feito     : %d \n", ft_atoi("1111111111111"));
	printf("13Verdadeiro: %d \n", 		atoi("11111111111111"));
	printf("13Feito     : %d \n", ft_atoi("11111111111111"));
	printf("14Verdadeiro: %d \n", 		atoi("111111111111111"));
	printf("14Feito     : %d \n", ft_atoi("111111111111111"));
	printf("15Verdadeiro: %d \n", 		atoi("1111111111111111"));
	printf("15Feito     : %d \n", ft_atoi("1111111111111111"));
	printf("16Verdadeiro: %d \n", 		atoi("11111111111111111"));
	printf("16Feito     : %d \n", ft_atoi("11111111111111111"));
	printf("17Verdadeiro: %d \n", 		atoi("111111111111111111"));
	printf("17Feito     : %d \n", ft_atoi("111111111111111111"));
	printf("18Verdadeiro: %d \n", 		atoi("1111111111111111111"));
	printf("18Feito     : %d \n", ft_atoi("1111111111111111111"));
	printf("19Verdadeiro: %d \n", 		atoi("11111111111111111111"));
	printf("19Feito     : %d \n", ft_atoi("11111111111111111111"));
	printf("20Verdadeiro: %d \n", 		atoi("111111111111111111111"));
	printf("20Feito     : %d \n", ft_atoi("111111111111111111111"));
	printf("21Verdadeiro: %d \n", 		atoi("1111111111111111111111"));
	printf("21Feito     : %d \n", ft_atoi("1111111111111111111111"));
	printf("22Verdadeiro: %d \n", 		atoi("11111111111111111111111"));
	printf("22Feito     : %d \n", ft_atoi("11111111111111111111111"));
	printf("23Verdadeiro: %d \n", 		atoi("111111111111111111111111"));
	printf("23Feito     : %d \n", ft_atoi("111111111111111111111111"));
	printf("24Verdadeiro: %d \n", 		atoi("1111111111111111111111111"));
	printf("24Feito     : %d \n", ft_atoi("1111111111111111111111111"));
	printf("25Verdadeiro: %d \n", 		atoi("11111111111111111111111111"));
	printf("25Feito     : %d \n", ft_atoi("11111111111111111111111111"));

} */
