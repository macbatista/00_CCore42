/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:30:58 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/16 14:27:51 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	i = 0;
	if (!n)
		return (0);
	while (p1[i] == p2[i] && i < (n - 1))
	{
		i++;
	}
	return (p1[i] - p2[i]);
}

/* int main(void)
{
const void	*s1 = "AFH";
const void	*s2 = "AAA";
size_t		n = 3;

printf("Real:%d\n",memcmp(s1,s2 ,n));
printf(" Meu:%d\n",ft_memcmp(s1,s2 ,n));

}     */