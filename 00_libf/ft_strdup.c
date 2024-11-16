/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:26:05 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/16 12:03:49 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	size_t	sl;
	size_t	j;
	char	*new;

	j = 0;
	sl = ft_strlen(s);
	new = (char *)malloc((sl + 1) * sizeof(char));
	if (!new)
		return (NULL);
	while (j < sl)
	{
		new[j] = s[j];
		j++;
	}
	new[j] = '\0';
	return (new);
}

/*  int	main(void)
{
	const char src[11] = "Hello World";
	size_t n = 10;

	char *str1;
	str1 = strdup(src);
	printf("a verdadeira:%s\n", str1);

	char *str2;
	str2 = ft_strdup(src);
	printf("    a minha:%s\n", str2);
}  */