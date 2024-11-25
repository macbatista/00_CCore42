/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:04:34 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/19 10:01:19 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (s[len] != (unsigned char)c && len > 0)
		len--;
	if (s[len] == (unsigned char)c)
		return ((char *)s + len);
	return (NULL);
}

/* int	main(void)
{
	printf("%s\n", strrchr("abcdabcdabcd", 'c'));
	printf("%s\n", strrchr("", 'c'));
	printf("%s\n", ft_strrchr("abcdabcdabcd", 'c'));
	printf("%s\n", ft_strrchr("", 'c'));
} */