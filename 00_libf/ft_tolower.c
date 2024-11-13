/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 00:53:58 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/11 00:54:45 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <xlocale.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
int	main(int c, char **v)
{
    int i = 0;

	(void)c;
	printf("Verdadeira: %c\n", tolower(v[1][0]));
	printf("   A minha: %c\n", ft_tolower(v[1][0]));

}