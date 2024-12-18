/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:19:02 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/16 13:59:21 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while ((s1[i] == s2[i]) && s1[i] && s2[i] && i < (n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* int main(int argc, char *argv[])
{
	if (argc < 4)
	{
		printf("Usage: %s <str1> <str2> <n>\n", argv[0]);
		return (1);
	}

	int n = atoi(argv[3]);
	int res1 = strncmp(argv[1], argv[2], n);
	int res = ft_strncmp(argv[1], argv[2], n);

	if (res1 == 0)
	{
		printf("<str1> and <str2> are equal");
		if (argc > 3)
			printf(" in the first %d bytes\n", n);
		printf("\n");
	}
	else if (res1 < 0)
	{
		printf("<str1> is less than <str2> (%d)\n", res1);
	}
	else
	{
		printf("<str1> is greater than <str2> (%d)\n", res1);
	}

	if (res == 0)
	{
		printf("<str1> and <str2> are equal");
		if (argc > 3)
			printf(" in the first %d bytes\n", n);
		printf("\n");
	}
	else if (res < 0)
	{
		printf("<str1> is less than <str2> (%d)\n", res);
	}
	else
	{
		printf("<str1> is greater than <str2> (%d)\n", res);
	}

	return (0);
} */