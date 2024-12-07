/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:53:20 by mcrispim          #+#    #+#             */
/*   Updated: 2024/12/07 12:29:48 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "00_libf/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

# define LC_HEX "0123456789abcdef"
# define HC_HEX "0123456789ABCDEF"

int	ft_putchar(char c);
int	ft_putstr(char *s);

#endif