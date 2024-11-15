/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 12:07:40 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/15 12:07:41 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/* int main(void)
{
	ft_putchar_fd('m',1);
	ft_putchar_fd('c',1);
	ft_putchar_fd('r',1);
	ft_putchar_fd('i',1);
	ft_putchar_fd('s',1);
	ft_putchar_fd('p',1);
	ft_putchar_fd('i',1);
	ft_putchar_fd('m',1);
	ft_putchar_fd('\n',1);
} */