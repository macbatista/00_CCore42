/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:51:17 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/10 10:18:56 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t		i;
	const char	*csrc;
	char		*cdst;

	csrc = src;
	cdst = dst;
	i = 0;
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}

/* int	main(void)
{
	char	src1[50] = "File to you";
	char	dst1[50] = "Luck you";
	char	src2[50] = "File to you";
	char	dst2[50] = "Luck you";

	memcpy(dst1, src1, 1);
	printf("Verdadeira:%s\n", (dst1));
	ft_memcpy(dst2, src2, 1);
	printf("   A minha:%s\n", (dst2));
} */
