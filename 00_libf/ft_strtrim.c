/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:13:36 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/19 13:35:39 by mcrispim         ###   ########.fr       */
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

int	ft_check_on_end(const char *s1, const char *set, int s1len)
{
	while (s1[s1len] && (ft_char_exist(s1[s1len], set) == 1))
		s1len--;
	return (s1len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1len;
	size_t	start;
	size_t	end;
	size_t	i;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	s1len = ft_strlen(s1);
	start = ft_check_on_begin(s1, set);
	end = ft_check_on_end(s1, set, (s1len - 1));
	if (start > end)
		return (ft_strdup(""));
	s1len = (end - start) + 1;
	new = (char *)malloc(((s1len) + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (i < (s1len))
	{
		new[i] = s1[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*  int main(void)
{
	printf("Test 1: %s\n", ft_strtrim("0050Hello World000", "000"));
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
