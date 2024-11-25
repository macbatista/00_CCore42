/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:56:02 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/23 19:07:36 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s && s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static size_t	ft_word_size(char const *s, char c)
{
	size_t	size;

	size = 0;
	while (s[size] && s[size] != c)
		size++;
	return (size);
}

static char	**ft_free_and_return(char **array, size_t i)
{
	while (i--)
		free(array[i]);
	free(array);
	return (NULL);
}

static char	**ft_allocate_and_fill(char const *s, char c, size_t word_count)
{
	char	**result;
	size_t	i;
	size_t	word_len;

	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		word_len = ft_word_size(s, c);
		result[i] = (char *)malloc((word_len + 1) * sizeof(char));
		if (!result[i])
			return (ft_free_and_return(result, i));
		ft_strlcpy(result[i], s, word_len + 1);
		s += word_len;
		i++;
	}
	result[word_count] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = ft_word_count(s, c);
	result = ft_allocate_and_fill(s, c, word_count);
	return (result);
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
