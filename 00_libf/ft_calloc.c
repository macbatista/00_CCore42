/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:41:29 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/15 10:42:05 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	return (ptr);
}

/* int main(void)
{
	size_t size = 6;
	size_t nmemb = 2;

	char *ptr1 = calloc(nmemb, size);
	if (ptr1 != NULL)
	{
		strncpy(ptr1, "TestTestTest", size - 1);
		strncpy(ptr1 + size, "tESTtESTtEST", size - 1);
		ptr1[size - 1] = '\0';
		printf("String: %s\n", ptr1);
	}
	else
	{
		printf("Falhou");
	}

	size_t i = 0;
	while (i < (size * nmemb))
	{
		if (ptr1[i] == '\0')
		{
			printf("[\\0]");
		}
		else
		{
			printf("%c", ptr1[i]);
		}
		i++;
	}

	char *ptr0 = ft_calloc(nmemb, size);
	if (ptr0 != NULL)
	{
		strncpy(ptr0, "TestTestTest", size - 1);
		strncpy(ptr0 + size, "tESTtESTtEST", size - 1);
		ptr0[size - 1] = '\0';
		printf("String: %s\n", ptr0);
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

} */
