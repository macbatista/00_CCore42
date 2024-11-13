/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:29:13 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/13 13:34:11 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr = (const unsigned char *)s;

	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
		{
			return ((void *)&ptr[i]);
		}
		i++;
	}
	return (NULL);
}

/* int main(int c, char **v)
{
(void) c;
(void) v;

const void	*s = "Hello World";
int			a = 'W';
size_t		n = 20;

char		*result1 = memchr(s, a, n);

	if (result1 != NULL) {
		printf("Character found: %s\n", result1);
	} else {
		printf("Character not found\n");
	}


char		*result2 = ft_memchr(s, a, n);

	if (result2 != NULL) {
		printf("Character found: %s\n", result2);
	} else {
		printf("Character not found\n");
	}

} */