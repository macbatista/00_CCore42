/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 16:47:37 by mcrispim          #+#    #+#             */
/*   Updated: 2024/12/06 18:54:04 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

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
                rt += ft_putchar((char){va_arg(you, int)});
            if (n[i + 1] == 's')
			    rt += ft_putstr(va_arg(you, char *));
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
