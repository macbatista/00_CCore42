/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:44:13 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/16 10:17:45 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned const char	*s;
	unsigned char		*d;
	size_t				a;

	if (!src && !dest)
		return (NULL);
	a = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (s > d)
	{
		while (n > a)
		{
			d[a] = s[a];
			a++;
		}
	}
	else
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	return (dest);
}

/* int	main(void)
{
	char	src1[50] = "File to you";
	char	dst1[50] = "Luck you";
	char	src2[50] = "File to you";
	char	dst2[50] = "Luck you........";
	char	src3[50] = "File to you";
	char	dst3[50] = "Luck you";
	char	src4[50] = "File to you";
	char	dst4[50] = "Luck you........";

	memmove(dst1, src1, 2);
	memmove(dst2, src2, 2);
	printf("Verdadeira1:%s\n", (dst1));
	printf("Verdadeira2:%s\n", (dst2));

	ft_memmove(dst1, src1, 2);
	ft_memmove(dst2, src2, 2);
	printf("Verdadeira1:%s\n", (dst1));
	printf("Verdadeira2:%s\n", (dst2));

} */
