/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:26:05 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/16 10:18:11 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strndup(const char *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(n + 1);
	if (!str)
		return (NULL);
	while (i < n)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

/* int	main(void)
{
	const char src[11] = "Hello World";
	size_t n = 10;

	char *str1;
	str1 = strndup(src, n);
	printf("a verdadeira:%s\n", str1);

	char *str2;
	str2 = ft_strndup(src, n);
	printf("    a minha:%s\n", str2);
} */