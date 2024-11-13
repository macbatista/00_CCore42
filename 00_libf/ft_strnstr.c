/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 11:19:09 by mcrispim          #+#    #+#             */
/*   Updated: 2024/11/13 11:19:58 by mcrispim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int main(int c, char **v)
{
    (void) c;
    (void) v;

    char big[] = "Hello World";
    char little[] = "ll";
    size_t len = 10;

    char *result = strnstr(big,little,len);

    if (result != NULL)
    printf("%s\n",result);
    else
    printf("NULL\n");
}
