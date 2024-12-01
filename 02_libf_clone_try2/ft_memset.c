/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:51:19 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/16 10:17:48 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*a;

	i = 0;
	a = b;
	while (i < len)
	{
		a[i] = c;
		i++;
	}
	return (b);
}

/* int	main(int c, char **v)
{
	char	str[50] = "Olá, mundo!";
	char	str2[50] = "Olá, mundo!";

	(void)c;
	(void)v;
	memset(str, 38, 5);
	printf("Verdadeira: %s\n", str);
	ft_memset(str2, 38, 5);
	printf("   A minha: %s\n", str2);
} */
