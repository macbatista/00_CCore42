/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:41:29 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/30 23:15:12 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*j;
	size_t	max;

	max = nmemb * size;
	if (nmemb && size && (max / size != nmemb))
		return (NULL);
	j = malloc(max);
	if (!j)
		return (NULL);
	ft_bzero(j, max);
	return (j);
}

/*    int main(void)
{
	size_t size = 0;
	size_t nmemb = 2;

	char *ptr10 = calloc(nmemb, size);
	if (ptr10 != NULL)
	{
		strncpy(ptr10, "TestTestTest", size - 1);
		strncpy(ptr10 + size, "tESTtESTtEST", size - 1);
		ptr10[size - 1] = '\0';
		printf("Original String: %s\n", ptr10);
	}
	else
	{
		printf("Falhou");
	}

	size_t i = 0;
	while (i < (size * nmemb))
	{
		if (ptr10[i] == '\0')
		{
			printf("[\\0]");
		}
		else
		{
			printf("%c", ptr10[i]);
		}
		i++;
	}

	printf("\n");

	char *ptr0 = ft_calloc(nmemb, size);
	if (ptr0 != NULL)
	{
		strncpy(ptr0, "TestTestTest", size - 1);
		strncpy(ptr0 + size, "tESTtESTtEST", size - 1);
		ptr0[size - 1] = '\0';
		printf("Minha String: %s\n", ptr0);
	}
	else
	{
		printf("Falhou");
	}

	size_t j = 0;
	while (j < (size * nmemb))
	{
		if (ptr0[j] == '\0')
		{
			printf("[\\0]");
		}
		else
		{
			printf("%c", ptr0[j]);
		}
		j++;
	}

	printf("\n");
}   */ 