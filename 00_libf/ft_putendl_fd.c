/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:07:46 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/16 10:17:54 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/* void ft_putchar_fd(char c, int fd)
{
	size_t	i;

	write(fd, &c, 1);
} */
void	ft_putstr_fd(char *s, int fd)
{
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}

/* int main(void)
{
	char	str[8] = "mcrispim";

	ft_putstr_fd(str,1);
}
 */