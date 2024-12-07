/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:47:37 by mcrispim          #+#    #+#             */
/*   Updated: 2024/12/07 12:40:10 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int long nb, char *hex)
{
	int	rt;

	rt = 0;
	if (nb < 16)
	{
		rt += ft_putchar(hex[nb]);
	}
	else
	{
		rt += ft_print_hex(nb / 16, hex);
		rt += ft_print_hex(nb % 16, hex);
	}
	return (rt);
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	rt;

	rt = 0;
	if (ptr == 0)
		rt += (ft_putstr("(nil)"));
	else
	{
		rt += ft_putstr("0x");
		rt += ft_print_hex(ptr, LC_HEX);
	}
	return (rt);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	return (i);
}

int	mb_choose(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'p')
		return (ft_print_ptr(va_arg(args, unsigned long long)));
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
	rt = printf("Ori:%p\n", "asdfghjkl");
	printf("\n\nRt:%d\n\n", rt);
	rt = ft_printf("meu:%p\n", "asdfghjkl");
	printf("\n\nRt:%d\n\n", rt);
}
