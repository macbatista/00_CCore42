/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 18:56:02 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/23 19:04:04 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_word_counter(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s && s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
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
	while (s && s[size] && s[size] != c)
		size++;
	return (size);
}

static void	ft_free_memory(char **array, size_t words)
{
	size_t	i;

	i = 0;
	while (i < words)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static char	*ft_next_word(char const *s, char c)
{
	while (*s == c)
		s++;
	return ((char *)s);
}

static char	**ft_allocate_result(size_t word_count)
{
	char	**result;

	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (result)
		result[word_count] = NULL;
	return (result);
}

static int	ft_fill_result(char **result, char const *s, char c, size_t word_count)
{
	size_t	i;
	size_t	word_len;

	i = 0;
	while (i < word_count)
	{
		s = ft_next_word(s, c);
		word_len = ft_word_size(s, c);
		result[i] = (char *)malloc((word_len + 1) * sizeof(char));
		if (!result[i])
			return (ft_free_memory(result, i), 0);
		ft_strlcpy(result[i], s, word_len + 1);
		s += word_len;
		i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = ft_word_counter(s, c);
	result = ft_allocate_result(word_count);
	if (!result)
		return (NULL);
	if (!ft_fill_result(result, s, c, word_count))
		return (NULL);
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
