/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 18:53:20 by mcrispim          #+#    #+#             */
/*   Updated: 2024/12/07 09:55:56 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINFT_H
# define PRINFT_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "00_libf/libft.h"

int	ft_putchar(char c);
int	ft_putstr(char *s);

#endif