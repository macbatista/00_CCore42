/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:13:36 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/19 14:13:32 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

// procura o char k pertencente a s1 existe no set.
int	ft_char_exist(char k, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == k)
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_on_begin(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && (ft_char_exist(s1[i], set) == 1))
		i++;
	return (i);
}

int	ft_check_on_end(const char *s1, const char *set, int s1len, int start)
{
	if (s1len < 0)
		return (s1len);
	while (s1len >= start && s1[s1len] && ft_char_exist(s1[s1len], set))
		s1len--;
	return (s1len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	start = ft_check_on_begin(s1, set);
	end = ft_check_on_end(s1, set, (int)(ft_strlen(s1) - 1), (int)start);
	if (start > end)
		return (ft_strdup(""));
	new = (char *)malloc((end - start + 2) * sizeof(char));
	if (!new)
		return (NULL);
	ft_strlcpy(new, &s1[start], end - start + 2);
	return (new);
}

/*  int main(void)
{
	printf("Test 1: %s\n", ft_strtrim("", ""));
		// Output: "Hello World"
	printf("Test 2: %s\n", ft_strtrim("000Hello World000", "0"));
		// Output: "Hello World"
	printf("Test 3: %s\n", ft_strtrim("abcHello Worldabc", "abc"));
		// Output: "Hello World"
	printf("Test 4: %s\n", ft_strtrim("xyzHello Worldxyz", "xyz"));
		// Output: "Hello World"
	printf("Test 5: %s\n", ft_strtrim("   Hello World   ", " "));
		// Output: "Hello World"
	printf("Test 6: %s\n", ft_strtrim("***Hello World***", "*"));
		// Output: "Hello World"
	printf("Test 7: %s\n", ft_strtrim("$$$Hello World$$$", "$"));
		// Output: "Hello World"
	printf("Test 8: %s\n", ft_strtrim("000000", "0"));
		// Output: ""
	printf("Test 9: %s\n", ft_strtrim("abc", "abc"));
		// Output: ""
	printf("Test 10: %s\n", ft_strtrim("", "abc"));
		// Output: ""
	printf("Test 11: %s\n", ft_strtrim("Hello World", ""));
		// Output: "Hello World"
	printf("Test 12: %s\n", ft_strtrim("Hello World", NULL));
		// Output: "Hello World" (se aceita NULL)
	printf("Test 13: %s\n", ft_strtrim(NULL, "abc"));
		// Output: NULL (se aceita NULL)
	printf("Test 14: %s\n", ft_strtrim("   Hello World   ", " \t"));
		// Output: "Hello World" (inclui tabulação)
	printf("Test 15: %s\n", ft_strtrim("12345Hello12345", "12345"));
		// Output: "Hello"
	printf("Test 16: %s\n", ft_strtrim("++Hello++", "+"));
		// Output: "Hello"
	printf("Test 17: %s\n", ft_strtrim("   ", " "));
		// Output: "" (apenas espaços)
	printf("Test 18: %s\n", ft_strtrim("Hello", "x"));
		// Output: "Hello" (nenhum caractere a ser removido)
	return (0);
}  */
