/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:51:17 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/10 08:51:18 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		/* code */
	}
}

int	main(void)
{
	char	src1[50] = "File to you";
	char	dst1[50] = "Luck you";
	char	src2[50] = "File to you";
	char	dst2[50] = "Luck you";

	memcpy(dst1, src1, 1);
	printf("Verdadeira:%s\n", (dst1));
	ft_memcpy(dst2, src2, 1);
	printf("   A minha:%s\n", (dst2));
}
