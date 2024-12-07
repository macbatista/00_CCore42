/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:47:37 by mcrispim          #+#    #+#             */
/*   Updated: 2024/12/07 11:37:22 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	mb_choose(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'd' || c == 'i')
		if (c == '%')
			return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *n, ...)
{
	int		rt;
	int		i;
	va_list	args;

	rt = 0;
	i = 0;
	va_start(args, n);
	while (n[i])
	{
		if (n[i] == '%' && n[i + 1])
		{
			rt += mb_choose(n[i + 1], args);
			i += 2;
		}
		else
		{
			rt += ft_putchar(n[i]);
			i++;
		}
	}
	va_end(args);
	return (rt);
}

int	main(void)
{
	int	rt;

	rt = ft_printf("Meu:123%c4567", 'a');
	printf("\n\nRt:%d\n\n", rt);
	rt = printf("Ori:123%c4567", 'a');
	printf("\n\nRt:%d\n\n", rt);
	rt = ft_printf("Meu123%s4567", "asdfghjkl");
	printf("\n\nRt:%d\n\n", rt);
}
