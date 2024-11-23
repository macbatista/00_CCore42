/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:35:10 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/23 16:22:57 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_word_counter(char const *s, char c)
{
	size_t	i;
	size_t	n;

	if (!s || s[0] == '\0')
		return (0);
	i = 0;
	n = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			n++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (n);
}

char	**ft_split(char const *s, char c)
{
	size_t	strs;
	char	**rt;

	if (!s)
		return (NULL);
	strs = ft_word_counter(s, c);
	printf("%zu\n",strs);
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

	str = "  1      ";
	split = ft_split(str, ' ');
	i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
	return (0);
}
