/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:51:06 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/10 08:51:07 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}

/* int	main(int c, char **v)
{
	(void)c;
	printf("Verdadeira = %d\n", isalnum(v[1][0]));
	printf("     Minha = %d\n", ft_isalpha(v[1][0]));
} */