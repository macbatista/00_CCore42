/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:51:01 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/16 12:31:27 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*a;

	i = 0;
	a = s;
	while (i < n)
	{
		a[i] = '\0';
		i++;
	}
}

/* int	main(int c, char **v)
{
	int		i;
	size_t	n;
	char	str0[50] = "12345678901234567890";
	char	str1[50] = "12345678901234567890";

	(void)c;
	(void)v;
	n = 0;
	i = 1;
	ft_bzero(str1, n);
	bzero(str0, n);
	printf("A Verdadeira: %c", str0[0]);
	while (i < 21)
		printf("%c", str0[i++]);
	printf("\n");
	i = 1;
	printf("     A minha: %c", str1[0]);
	while (i < 21)
		printf("%c", str1[i++]);
	printf("\n");
} */
