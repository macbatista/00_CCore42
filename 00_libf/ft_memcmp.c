/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:30:58 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/16 10:17:27 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*a1 = (const char *)s1;
	const char	*a2 = (const char *)s2;

	i = 0;
	while (a1[i] && a2[i] && i < n)
	{
		if (a1[i] != a2[i])
		{
			return (a1[i] - a2[i]);
		}
		i++;
	}
	return (0);
}

/* int main(void)
{
const void	*s1 = "AFH";
const void	*s2 = "AAA";
size_t		n = 3;

printf("Real:%d\n",memcmp(s1,s2 ,n));
printf(" Meu:%d\n",ft_memcmp(s1,s2 ,n));

}     */