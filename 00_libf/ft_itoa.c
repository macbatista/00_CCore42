/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 09:05:31 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/22 13:17:20 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>

static int	ft_int_size(int n)
{
	int	sz;

	sz = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		sz = 1;
		n *= -1;
	}
	while (n > 9)
	{
		n /= 10;
		sz++;
	}
	if (n < 10)
		sz++;
	return (sz);
}

char	*ft_populate(int n, int sz, char *rt)
{
	unsigned int	nbr;

	rt[sz] = '\0';
	if (n == 0)
	{
		rt[0] = (0 + 48);
		return (rt);
	}
	if (n < 0)
	{
		rt[0] = '-';
		nbr = n * -1;
	}
	else
		nbr = n;
	sz -= 1;
	while (nbr > 0)
	{
		rt[sz] = ((nbr % 10) + 48);
		nbr /= 10;
		sz--;
	}
	return (rt);
}

char	*ft_itoa(int n)
{
	int		sz;
	char	*rt;

	sz = ft_int_size(n);
	rt = (char *)malloc(sz + 1 * sizeof(char));
	if (!rt)
		return (NULL);
	rt = ft_populate(n, sz, rt);
	return (rt);
}

int	main(void)
{
	printf("%s\n", ft_itoa(INT_MIN));
	printf("%s\n", ft_itoa(INT_MAX));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(-1));
	printf("%s\n", ft_itoa(-23456789));
	printf("%s\n", ft_itoa(123456789));
}
