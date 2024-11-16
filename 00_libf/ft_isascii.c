/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:51:11 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/16 10:17:11 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_isascii(char c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/* int	main(int c, char **v)
{
	(void)c;
	printf("Verdadeira = %d\n", isascii(v[1][0]));
	printf("     Minha = %d\n", ft_isascii(v[1][0]));
	printf("      NULO = %d\n", ft_isascii('\0'));
} */