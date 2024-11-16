/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:19:17 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/16 10:18:08 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	j;

	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] == (unsigned char)c)
		{
			return ((char *)&s[j]);
		}
		j++;
	}
	if (c == '\0')
	{
		return ((char *)&s[j]);
	}
	return (NULL);
}

/* int	main(int argc, char **argv)
{
	char	a;
	char	*found1;
	char	*found2;

	(void)argc;
	a = '1';
	found1 = strchr(argv[1], a);
	if (found1)
	{
		printf("Caractere '%c' encontrado na posição: %ld\n", a, found1
			- argv[1]);
	}
	else
	{
		printf("Caractere '%c' não encontrado na string.\n", a);
	}
	found2 = ft_strchr(argv[1], a);
	if (found2)
	{
		printf("Caractere '%c' encontrado na posição: %ld\n", a, found2
			- argv[1]);
	}
	else
	{
		printf("Caractere '%c' não encontrado na string.\n", a);
	}
	return (0);
} */
