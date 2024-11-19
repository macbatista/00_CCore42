/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:04:34 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/19 09:37:34 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


char *ft_strrchr(const char *s, int c)
{
	(void) c;
	size_t len;
	
	len = ft_strlen(s);
		if (len <= 0)
		return (NULL);
	while (len >= 0)
	{
		if (s[len] == c)
			return ((char*)&s[len]);
		len --;
	}
	return (NULL);
} 

int main(void)
{
	printf("%s\n",strrchr("abcdabcdabcd", 'c'));
	printf("%s\n",strrchr("", 'c'));
	printf("%s\n",ft_strrchr("abcdabcdabcd", 'c'));
	printf("%s\n",ft_strrchr("", 'c'));
}