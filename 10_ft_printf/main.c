/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:47:37 by mcrispim          #+#    #+#             */
/*   Updated: 2024/12/07 11:17:46 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *n, ...)
{
	int		rt;
	int		i;
	va_list	list;

	i = 0;
	rt = 0;
	va_start(list, n);
	while (n[i])
	{
		if (n[i] == '%')
		{
			if (n[i + 1] == 'c')
				rt += ft_putchar((char){va_arg(list, int)});
			if (n[i + 1] == 's')
				rt += ft_putstr(va_arg(list, char *));
			if (n[i + 1] == 'p')
				rt += ft_putstr(va_arg(list, char *));
			if (n[i + 1] == 'd')
				rt += ft_putstr(va_arg(list, char *));
			if (n[i + 1] == 'i')
				rt += ft_putstr(va_arg(list, char *));
			if (n[i + 1] == 'u')
				rt += ft_putstr(va_arg(list, char *));
			if (n[i + 1] == 'x')
				rt += ft_putstr(va_arg(list, char *));
			if (n[i + 1] == 'X')
				rt += ft_putstr(va_arg(list, char *));
			if (n[i + 1] == '%')
				rt += ft_putstr(va_arg(list, char *));
			i += 2;
		}
		write(1, &n[i], 1);
		rt++;
		i++;
	}
	va_end(list);
	return (rt);
}

/* int	main(void)
{
	int	rt;

	rt = ft_printf("Meu:123%c4567", 'a');
	printf("\n\nRt:%d\n\n", rt);
	rt = printf("Ori:123%c4567", 'a');
	printf("\n\nRt:%d\n\n", rt);
	rt = ft_printf("Meu123%s4567", "asdfghjkl");
	printf("\n\nRt:%d\n\n", rt);
} */
