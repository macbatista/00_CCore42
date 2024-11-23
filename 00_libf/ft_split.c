/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:41:36 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/23 18:41:37 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

size_t	ft_word_counter(char const *s, char c)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (!s || s[0] == '\0')
		return (0);
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

size_t	ft_word_size(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

void	ft_free_memory(char **rt, size_t i)
{
	while (i > 0)
	{
		free(rt[i - 1]);
		i--;
	}
	free(rt);
}

char	**ft_allocate_memory(char const *s, char c, size_t strs)
{
	char	**rt;
	size_t	i;

	i = 0;
	rt = malloc((strs + 1) * sizeof(char *));
	if (!rt)
		return (NULL);
	while (i < strs)
	{
		while (*s == c)
			s++;
		rt[i] = malloc((ft_word_size(s, c) + 1) * sizeof(char));
		if (!rt[i])
		{
			ft_free_memory(rt, i);
			return (NULL);
		}
		s += ft_word_size(s, c);
		i++;
	}
	rt[i] = NULL;
	return (rt);
}

char	**ft_split(char const *s, char c)
{
	size_t	strs;
	char	**rt;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s)
		return (NULL);
	strs = ft_word_counter(s, c);
	rt = ft_allocate_memory(s, c, strs);
	if (!rt)
		return (NULL);
	while (i < strs)
	{
		while (*s == c)
			s++;
		j = 0;
		while (j < ft_word_size(s, c))
			rt[i][j++] = *s++;
		rt[i++][j] = '\0';
	}
	return (rt);
}

/* int	main(void)
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
		free(split[i]);
		i++;
	}
	free(split);
	return (0);
} */
