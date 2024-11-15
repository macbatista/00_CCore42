/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:30:17 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/13 15:30:33 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	while (src[src_len])
		src_len++;
	if (dst_len >= size)
		return (size + src_len);
	while (src[i] && (dst_len + i) < (size - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

/* int	main(void)
{
	const char src[] = "Hello World";
	char dst1[20] = "Start: ";
	char dst2[20] = "Start: ";
	size_t len1;
	size_t len2;

	len1 = strlcat(dst2, src, sizeof(dst2));
	printf("Destino com strlcat: %s\n", dst2);
	printf("Comprimento com strlcat: %zu\n", len1);

	len2 = ft_strlcat(dst1, src, sizeof(dst1));
	printf("Destino com ft_strlcat: %s\n", dst1);
	printf("Comprimento com ft_strlcat: %zu\n", len2);

	return (0);
} */