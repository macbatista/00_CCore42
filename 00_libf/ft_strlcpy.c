
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:53:32 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/10 10:55:16 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

/* int main(void)
{
	const char src[] = "Hello World";
	char dst1[10];
	char dst2[10];
	size_t len1;
	size_t len2;

	len1 = strlcpy(dst2, src, sizeof(dst1));
	printf("Destino: %s\n", dst2);
	printf("Comprimento: %zu\n", len1);

	len2 = ft_strlcpy(dst1, src, sizeof(dst2));
	printf("Destino: %s\n", dst1);
	printf("Comprimento: %zu\n", len2);
} */
