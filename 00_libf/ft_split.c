/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:35:10 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/22 21:53:49 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_delimiter_counter(char const *s, char c)
{
	size_t	i;
	size_t	n;

	if (!s)
		return (0);
	i = 0;
	n = 0;
	while (s[i])
	{
		i++;
		if (s[i] == c)
			n++;
	}
	n++;
	return (n);
}

char	**ft_split(char const *s, char c)
{
	size_t	strs;
	char	**rt;

	if (!s)
		return (NULL);
	strs = ft_delimiter_counter(s, c);
	rt = malloc((strs + 1) * sizeof(char *));
	if (!rt)
		return (NULL);
	rt[0] = malloc(5 * sizeof(char));
	rt[1] = malloc(5 * sizeof(char));
	if (!rt[0] || !rt[1])
	{
		free(rt);
		return (NULL);
	}
	rt[0] = "Test";
	rt[1] = "Data";
	rt[strs] = NULL;
	return (rt);
}

int	main(void)
{
	char	*str;
	char	**split;
	int		i;

	str = "Hello World";
	split = ft_split(str, ' ');
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}
