/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcelobatista <marcelobatista@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:19:16 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/10 08:47:22 by marcelobati      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/* int	main(int c, char **v)
{
	(void)c;
	printf("Verdadeira = %d\n", isalpha(v[1][0]));
	printf("     Minha = %d\n", ft_isalpha(v[1][0]));
} */
