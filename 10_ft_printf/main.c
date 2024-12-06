/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:47:37 by mcrispim          #+#    #+#             */
/*   Updated: 2024/12/06 18:30:20 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "00_libf/libft.h"

int	ft_printf(const char *n, ...)
{
	int		rt;
	int		i;
	va_list	you;

	i = 0;
	rt = 0;
	va_start(you, n);
	while (n[i])
	{
		if (n[i] == '%')
		{
			if (n[i + 1] == 'c')
            {
                ft_putchar_fd((char){va_arg(you, int)}, 1);
				rt++;
			}
            if (n[i + 1] == 's')
			{
				ft_putstr_fd(va_arg(you, char *),1);
			}
			i += 2;
		}
		write(1, &n[i], 1);
		rt++;
		i++;
	}
	va_end(you);
	return (rt);
}
//rt = ft_dkjasbd
int main(void)
{
    int rt;
    
    rt = ft_printf("123%c4567",'a');
    printf("\n\nRt:%d\n\n",rt);

    rt = printf("123%c4567",'a');
    printf("\n\nRt:%d\n\n",rt);

    rt = ft_printf("123%s4567","asdfghjkl");
    printf("\n\nRt:%d\n\n",rt);
}
