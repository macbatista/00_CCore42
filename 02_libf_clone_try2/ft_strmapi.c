/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:40:52 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/22 15:58:59 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	sz;
	size_t	i;
	char	*rt;

	i = 0;
	sz = ft_strlen(s);
	rt = (char *)malloc((sz + 1) * sizeof(char));
	if (!rt)
		return (NULL);
	while (s[i])
	{
		rt[i] = f(i, s[i]);
		i++;
	}
	rt[i] = '\0';
	return (rt);
}

/* char	modify_char(unsigned int index, char c)
{
	if (index % 2 == 0)
	{
		if (c >= 'a' && c <= 'z')
		{
			return (c - 32);
		}
	}
	return (c);
}

int	main(void)
{
	const char *original_str = "libftisawesome";
	char *modified_str;

	// Chama ft_strmapi com a string original e a função modify_char
	modified_str = ft_strmapi(original_str, modify_char);

	// Verifica se a memória foi alocada com sucesso
	if (modified_str == NULL)
	{
		printf("Erro: Falha na alocação de memória.\n");
		return (1);
	}

	// Exibe a string original e a modificada
	printf("String original: %s\n", original_str);
	printf("String modificada: %s\n", modified_str);

	// Libera a memória alocada
	free(modified_str);

	return (0);
} */