/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 16:23:11 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/11 00:55:16 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <xlocale.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
int	main(int c, char **v)
{
	(void)c;
	printf("Verdadeira: %c\n", toupper(v[1][0]));
	printf("   A minha: %c\n", ft_toupper(v[1][0]));
}